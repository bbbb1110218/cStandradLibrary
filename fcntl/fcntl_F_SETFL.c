#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *   @func:     fcntl(fd,F_SETFL);
 *        
 *   @brief       F_SETFL 是 set file status flags 的简写 获取文件状态标志 

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
    printf("set O_NONBLOCK before ,flag =0X%08X\n",flag);
    flag |=O_NONBLOCK;  //设置文件不阻塞  
    printf("set O_NONBLOCK later ,flag =0X%08X\n",flag);

    if(fcntl(fd,F_SETFL,flag) ==-1){
        fprintf(stderr,"设置文件状态标志失败");
        close(fd);
        exit(-2);
    }else{
        fprintf(stdout,"设置文件状态标志成功");
    
    }

    close(fd);

    return 0;
}