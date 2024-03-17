#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 *   @func: 
                    int	 dup(int fd);
 *        
 *   @brief
 *      
 *   @param  fd 需要复制的文件描述符
 *   @param
 *   @param 
 * 
 *   @return    
 * 
 *   @note 
*/
int main(){

    int fd=dup(fileno(stdout));     //复制标准输出
    close(fileno(stdout));          //关闭标准输出
    const char *tmp="hello kitty";
    write(fd,tmp,strlen(tmp)+1);

    close(fd);

    return 0;
}