#include <stdio.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <stdlib/stdlib.c>
#include <fcntl.h>

/**
 *   @func:     int	 dup2(int new , int old);
 *        
 *   @brief      会关闭old 然后new 重定向到old 这个时候old已经指向新的文件描述符了
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return    if return value  < 0  dup2 failed
 * 
 *   @note 
*/
int main(){

    int nfd=open("deleteMe.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(nfd < 0) {
        perror("open");
        return 1;
    }

    // 使用dup2将标准输出重定向到文件
    if( dup2(nfd,STDOUT_FILENO) < 0){
        perror("dup2");
        return -1;
    }

    // 现在，printf将输出到文件而不是终端
    printf("hello,kitty");

    close(nfd);

    return 0;
}