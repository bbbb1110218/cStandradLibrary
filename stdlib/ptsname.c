#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


/**
 *   @func:   ptsname(伪设备)
 *      
 *        
 *   @brief
 *      
 *   @param  fd: 伪终端主设备的文件描述符 通过posix_openpt函数得到
 *   @param
 *   @param 
 * 
 *   @return :返回指向伪终端从设备的路径名的指针。如果出错，返回 NULL。
 * 
 *   @note  :  伪终端（pseudo-terminal）是一种特殊的设备，它模拟了物理终端的行为。
 *              伪终端通常用于实现如 shell、telnet、ssh 等程序。
*/
int main(){

int fd =posix_openpt(O_RDWR | O_NOCTTY);
    
    if (fd == -1) {
        perror("Error opening pseudo-terminal");
        return 1;
    }

    //授权伪终端从设备，使其可以被打开
    if(grantpt(fd) == -1){
        perror("Error granting access to slave pseudo-terminal");
        return 1;
    }

    //解锁伪终端从设备，使其可以被打开
    if(unlockpt(fd) == -1){
        perror("Error unlocking slave pseudo-terminal");
        return 1;
    }

    char *slave_name = ptsname(fd);
    if (slave_name == NULL) {
        perror("Error getting slave pseudo-terminal name");
        return 1;
    }else{
        printf("slave_name:%s\n",slave_name);
        
    }

    close(fd);

    return 0;
}