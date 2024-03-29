#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *   @func:     fcntl(fd,F_GETFL);
 *        
 *   @brief     获取文件的状态标志 
 *              F_GETFL 是 get file status flags 的简写 获取文件状态标志 

 *   @param fd       文件描述符
 *   @param F_GETFL  文件状态
 *   @param 
 * 
 *   @return  文件的状态标志
 * 
  @note      #define O_SHLOCK        0x00000010       open with shared file lock
            // #define O_EXLOCK        0x00000020       open with exclusive file lock 
            // #define O_ASYNC         0x00000040      signal pgrp when data ready 
            // #define O_FSYNC         O_SYNC           source compatibility: do not use 
            // #define O_NOFOLLOW      0x00000100      don't follow symlinks 

            // #define O_CREAT         0x00000200      create if nonexistant 
            // #define O_TRUNC         0x00000400      truncate to zero length 
            // #define O_EXCL          0x00000800      error if already exists

*/


int main(){

    int fd =  open("template.c",O_RDONLY);
    int flag=fcntl(fd,F_GETFL);
    if(flag==-1){
        perror("fcntl");
        exit(-1);
    }

//对于 O_RDONLY，O_WRONLY 和 O_RDWR，你应该使用等于 == 操作符来检查，因为这些标志是互斥的，它们定义了文件的访问模式。所以你的代码应该是这样的：
//not printf("读权限: Flag & O_RDONLY = %s\n", (flag & O_RDONLY) ? "True" : "False");
    printf("读权限: Flag & O_RDONLY = %s\n", (flag ==  O_RDONLY) ? "True" : "False");
    printf("写权限: Flag & O_WRONLY = %s\n", (flag == O_WRONLY) ? "True" : "False");
    printf("读写权限: Flag & O_RDWR = %s\n", (flag == O_RDWR) ? "True" : "False");

//对于其他的标志，如 O_APPEND，O_NONBLOCK，O_CREAT，O_TRUNC 和 O_EXCL，你应该使用位与 & 操作符来检查，因为这些标志可以和访问模式标志一起使用。所以你的代码应该保持不变：
    printf("追加模式: Flag & O_APPEND = %s\n", (flag & O_APPEND) ? "True" : "False");
    printf("非阻塞模式: Flag & O_NONBLOCK = %s\n", (flag & O_NONBLOCK) ? "True" : "False");
    printf("创建文件: Flag & O_CREAT = %s\n", (flag & O_CREAT) ? "True" : "False");
    printf("截断文件: Flag & O_TRUNC = %s\n", (flag & O_TRUNC) ? "True" : "False");
    printf("独占模式: Flag & O_EXCL = %s\n", (flag & O_EXCL) ? "True" : "False");

    close(fd);

    return 0;
}