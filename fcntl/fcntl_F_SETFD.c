#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *   @func:     fcntl(fd, F_SETFD, flag)
 *        
 *   @brief     设置文件描述符的状态标志
 * 
 *              文件描述符只有一个状态标志，即 FD_CLOEXEC，它决定了文件描述符是否在 exec 系列函数执行时被关闭
 *      
 *   @param fd: 需要设置状态标志的文件描述符
 *   @param flag: 新的文件描述符状态标志。如果你想在 exec 时关闭文件描述符，你应该设置这个参数为 FD_CLOEXEC
 * 
 *   @return    如果成功，返回零。如果出错，返回 -1
 * 
 *   @note      你可以使用这个函数来设置文件描述符是否在 exec 时被关闭。如果你设置 flag 参数为 FD_CLOEXEC，那么文件描述符在 exec 时将被关闭
*/

int main(){

    pid_t pid;
    int fd =  open("template.c",O_RDONLY);
    int flag= fcntl(fd,F_GETFD);

    if(-1 ==flag){
        perror("fcntl");
        exit(-1);
    }

    flag |= FD_CLOEXEC;

    if(-1 == fcntl(fd,F_SETFD,flag)){
        perror("fcntl");
        exit(-2);
    }

    pid=fork();
    if(pid < 0)
    {
        perror("fork");
        exit(-1);
    }else if (pid == 0)
    {
        // 将文件描述符转换为字符串
        char fd_str[10];
        sprintf(fd_str, "%d", fd);

        // 执行新的程序
        char *argv[] = {"./read_fd", fd_str, NULL};
        execv(argv[0], argv);

        // 如果 execv 成功，那么以下的代码将不会被执行
        perror("execv");
        exit(-1);
    }
    else{
        int status;
        waitpid(pid,&status,0);
        printf("Main process Done"); 
    }


    return 0;
}