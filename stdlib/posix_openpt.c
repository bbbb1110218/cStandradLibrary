
/** 
 *      @function: posix_openpt(O_RDWR | O_NOCTTY)
 *      @return :fd
 *      @breif: posix_openpt 是 "POSIX open pseudo-terminal" 的缩写。 
 * pseudo means fake ,POSIX 是 "Portable Operating System Interface" 的缩写，
 * 是一种定义了操作系统应该提供哪些接口给应用程序的标准。
 * 在这个上下文中，posix_openpt 是一个符合 POSIX 标准的函数，用于打开一个伪终端设备。
 * 
 * 伪终端（pseudo-terminal）是一种特殊的设备，它模拟了物理终端的行为。
 * 伪终端通常用于实现如 shell、telnet、ssh 等程序。
 * 这些程序需要一个终端接口，但是并不需要物理设备（如键盘或显示器）。
 * 通过使用伪终端，这些程序可以在没有物理终端的情况下运行，例如在后台或通过网络。
 * 
 * 在你的代码中，你可以使用 posix_openpt 函数打开一个伪终端设备，然后使用返回
 * 的文件描述符进行后续的操作。例如，你可以使用 write 函数向伪终端写入数据，或者
 * 使用 read 函数从伪终端读取数据。这可以用于测试或模拟终端应用程序的行为。
*/


/**
 *   @function:       grantpt(伪设备)
 *   @brief :rantpt 是一个库函数，用于改变伪终端从设备的权限和所有权。这个函数接受一个伪终端主
 * 设备的文件描述符作为参数。在 Unix-like 系统中，每个设备文件都有一个所有者和一个权限集。
 * 所有者决定了哪个用户可以改变设备文件的权限，而权限集决定了哪些用户可以读取、写入或执行
 * 设备文件。当你使用 posix_openpt 函数打开一个伪终端主设备时，相应的从设备可能并不可用。
 * 你需要使用 grantpt 函数改变从设备的所有者和权限，使其可以被其他用户（通常是当前用户）打开。
 * 然后，你需要使用 unlockpt 函数解锁从设备，使其可以被打开。
*/


/**
 *      伪终端（pseudo-terminal）是一种特殊的设备，它模拟了物理终端的行为。
 *      伪终端由一对设备组成：一个主设备（master device）和一个从设备（slave device）。
 *      
 *      主设备通常被服务进程（如 sshd 或 xterm）打开，而从设备则被客户进程（如 bash 或其他 shell）打开。
 *      通过主设备写入的数据会出现在从设备的读取中，反之亦然。这就像是一个虚拟的终端，
 *      可以用来运行需要终端交互的程序，例如 shell、vim 等。
 * 
 *      伪终端的主设备和从设备是一对配对的设备。主设备通常被服务进程（如 sshd 或 xterm）打开，而从设备则被客户进程
 *      （如 bash 或其他 shell）打开。通过主设备写入的数据会出现在从设备的读取中，反之亦然。
        这意味着，如果你的程序打开了一个伪终端的主设备，并向其写入数据，那么这些数据可以从伪终端的从设备中读取出来，
        就像是用户在终端中输入的数据。同样，如果有数据从伪终端的从设备写入（例如，一个运行在伪终端中的 shell 程序的输出），
        那么这些数据可以从伪终端的主设备中读取出来。
        所以，对于你的程序来说，主设备和从设备都可以进行读写操作。主设备的读操作对应从设备的写操作，主设备的写操作对应从设备的读操作。
*/


#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


/**
 * 
 * @function: posix_openpt(O_RDWR | O_NOCTTY) 
 * @param : O_NOCTTY 是一个标志位，用于告诉操作系统不要将这个伪终端设置为当前进程的控制终端。(O_NOCTTY no controlling terminal)
 *          这个标志位通常用于守护进程，因为守护进程通常不需要一个控制终端。
 * @brief: posix_openpt 是 "POSIX open pseudo-terminal" 的缩写。
 * 伪终端（pseudo-terminal）是一种特殊的设备，它模拟了物理终端的行为。
 * 伪终端通常用于实现如 shell、telnet、ssh 等程序。
 *  这些程序需要一个终端接口，但是并不需要物理设备（如键盘或显示器）。
 * 通过使用伪终端，这些程序可以在没有物理终端的情况下运行，例如在后台或通过网络。
 * 
 * @notice: 得到文件描述符之后,需要对该文件描述符进行授权和解锁
 *          grantpt(伪设备)  unlockpt(伪设备)
 *          之后才能使用该文件描述符进行读写操作
 * 
 * 
 * @return :fd文件描述符
*/

int main() {
    //打开为设备
    int master_fd = posix_openpt(O_RDWR | O_NOCTTY); 
    if (master_fd == -1) {
        perror("Error opening pt");
        return 1;
    }

    // 解锁伪终端从设备，使其可以被打开
    // grant授权设备
    // unlockpt 解锁设备
    if (grantpt(master_fd) == -1 || unlockpt(master_fd) == -1) {
        perror("Error unlocking pt");
        close(master_fd);
        return 1;
    }

    // 获取伪终端从设备的路径
    // ptsname(psfd ) 获取伪终端从设备的路径
    char *slave_name = ptsname(master_fd);
    if (slave_name == NULL) {
        perror("Error getting slave pt name");
        close(master_fd);
        return 1;
    }

    printf("Opened pseudo-terminal: master=%d, slave=%s\n", master_fd, slave_name);

    // 写入数据到伪终端主设备
    const char *message = "Hello, world!\n";
    write(master_fd, message, strlen(message));

    // 读取数据从伪终端主设备
    char buffer[128];
    ssize_t n = read(master_fd, buffer, sizeof(buffer) - 1);
    if (n > 0) {
        buffer[n] = '\0';
        printf("Read from pseudo-terminal: %s", buffer);
    }

    close(master_fd);
    return 0;
}