
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>


/**
 *   @func:  int truncate(const char *filename,size_t length);
 *        
 *   @brief   把文件截断成length字节,如果文件小于length 不处理
 *      
 *   @param filename 是你想要更改大小的文件的路径
 *   @param length   是你想要设置的新大小
 *   @param 
 * 
 *   @return -1 if error 
 * 
 *   @note  truncate 函数只能用于普通文件，不能用于目录或某些类型的特殊文件。
 * 
*/
int main(){
   

    int fd=open("deleteme.txt",O_RDWR | O_CREAT |O_TRUNC,0644);
    const char *buff="Hello,kitty";
    //notice:如果文件出现了不可见字符 会被认为是二进制文件

    //写入hello,kitty +"\0"
    write(fd,buff,strlen(buff)+1);  
    close(fd);



    if(truncate("deleteme.txt",strlen(buff))==-1){
        perror("truncate");
        exit(-1);
    };



    return 0;
}