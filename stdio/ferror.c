#include<stdio.h>
#include<stdlib.h> // Add missing include statement

/**
 * @brief:一下情况会促发ferror错误
 *  1. 磁盘读写错误，如磁盘已满，磁盘损坏等
 *  2. 读写错误，如文件已经被删除
 *  3. 流状态错误，如果流的状态不对，如流已经关闭，流已经被打开等
 *  4. 或者文件没有读取权限等等  没有权限返回空指针
 * 
*/

#define buffSize 1024
char Buff[buffSize];
int main(){
    FILE *fp=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt", "w"); 
    // if(!fp)
    //     perror("fopen");


    int flag=ferror(fp);

    printf("%x\n",(unsigned int)flag);
    fclose(fp);
    return 0;
}