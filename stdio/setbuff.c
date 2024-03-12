#include <stdio.h>


/**
 *    setbuff(FILE *,char* Buff,BuffSize);
 * 
 *     setbuff(file,NULL); or setvbuff(file,NULL,_IONBF,0) 设置IO没有缓冲区
 * 
 *  @brief:
 *      概念：一次IO可以很多个字符，操作系统在中间设置一个缓冲区，每次IO都先写到缓冲区
 *      一般都是在关闭文件流的时候，才会写入文件中
 *       缓冲区满了，或者显示调用fflush() 也会被写入文件中
 *      如果没有缓冲区，就直接写文件了
 *      
            *    给文件流设置缓冲区，但是不应该直接操作缓存
            *    操作系统会决定 用
            *    全缓冲 等缓冲区满了 再刷新到文件流中
            *    行缓冲 满一行了     在刷新到文件流中
            *    无缓冲  IO没有缓冲区 每次写一个文件都刷新到文件流中
*/


int main(){
    char buff[1024];


    FILE * file = fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","w");

    setbuffer(file, buff, 1024);
  

    for(int i=0;i<1024-1;i++){
        fputc('c',file);
       /*@ERROR:不应该操作缓存 buff[i]='c'; */
    }

    fflush(file);
    fclose(file);
    return 0;




