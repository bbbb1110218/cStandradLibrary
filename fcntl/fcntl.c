#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 *   @func:     int fcntl(int fd, int cmd, ... );
 *        
 *   @brief     fcntl 是一个在 Unix-like 系统中用于操作文件描述符的函数。
 *              它可以用于获取或设置文件描述符的属性，例如文件锁和文件状态标志。
 *      
 *   @param     fd 文件描述符
 *   @param     cmd 
                F_DUPFD：复制文件描述符。fcntl 函数会返回一个新的文件描述符，这个文件描述符和原始的文件描述符指向同一个文件。这个新的文件描述符会是当前可用的最小的文件描述符。

                F_GETFD：获取文件描述符标志。fcntl 函数会返回文件描述符的标志。

                F_SETFD：设置文件描述符标志。fcntl 函数会设置文件描述符的标志。

                F_GETFL：获取文件状态标志。fcntl 函数会返回文件的状态标志，例如 O_RDONLY、O_WRONLY 或 O_RDWR。

                F_SETFL：设置文件状态标志。fcntl 函数会设置文件的状态标志。

                F_GETOWN：获取接收 SIGIO 和 SIGURG 信号的进程或进程组。fcntl 函数会返回接收这些信号的进程 ID 或进程组 ID。

                F_SETOWN：设置接收 SIGIO 和 SIGURG 信号的进程或进程组。fcntl 函数会设置接收这些信号的进程 ID 或进程组 ID。

                F_GETLK：获取记录锁定信息。fcntl 函数会返回一个 flock 结构，这个结构描述了文件的锁定状态。

                F_SETLK：设置或清除记录锁定。fcntl 函数会根据一个 flock 结构来设置或清除文件的锁定。

                F_SETLKW：和 F_SETLK 类似，但是如果锁定被阻塞，fcntl 函数会等待直到锁定成功。
                
                F_DUPFD_CLOEXEC：和 F_DUPFD 类似，但是新的文件描述符会有 FD_CLOEXEC 标志。这意味着当执行 exec 系列函数时，新的文件描述符会被关闭。

                F_GETLEASE：获取文件的租约类型。fcntl 函数会返回一个表示租约类型的值，例如 F_RDLCK、F_WRLCK 或 F_UNLCK。

                F_SETLEASE：设置文件的租约类型。fcntl 函数会根据第三个参数来设置文件的租约类型。

                F_NOTIFY：设置文件更改通知。fcntl 函数会根据第三个参数来设置哪些类型的文件更改会产生 SIGIO 信号。

                F_GETPIPE_SZ：获取管道的容量。fcntl 函数会返回管道的容量，单位是字节。

                F_SETPIPE_SZ：设置管道的容量。fcntl 函数会根据第三个参数来设置管道的容量。
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main() {
    int fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    int flags = fcntl(fd, F_GETFL);
    if (flags == -1) {
        perror("fcntl");
        return 1;
    }

    printf("File status flags: %o\n", flags);

    close(fd);

    return 0;
}