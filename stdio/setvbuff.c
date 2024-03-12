#include <stdio.h>


/**
 *  setvbuff(file,buffer,_IOFBF,sizeof(buffer));
 *   _IOFBF  全缓冲
 *   _IOLBF  行缓冲
 *   _IONBF  无缓冲
 *  @brief:设置文件的缓存，直接到
*/


int main(){
    char buff[1024];


    FILE * file = fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","w");


    setvbuf(file, buff, _IOFBF, sizeof(buff)); //设置全缓冲 缓冲满了，或者显示调用fflush才会刷新缓存到文件流
    setvbuf(file, buff, _IOLBF, sizeof(buff)); //设置行缓冲 遇到换行符才刷新到文件流
    setvbuf(file, NULL, _IONBF, 0);             //设置设置无缓冲


    for(int i=0;i<1024-1;i++){
        fputc('c',file);
       /*@ERROR:不应该操作缓存 buff[i]='c'; */
    }

    fflush(file);
    fclose(file);
    return 0;


}
