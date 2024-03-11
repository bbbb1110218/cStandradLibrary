#include<stdio.h>
#include<string.h> // Add missing include statement

/**
 * @brief: sprintf(buff,format, arg1, arg2, ...)
 * @like: 
 *  1. 将格式化的数据写入缓存 或者指针
*/

#define buffSize 1024
char Buff[buffSize];
int main(){
    

    int iVal=5;

    //int to string
    sprintf(Buff, "Fuck you bitch %d", iVal);
 

    fputs(Buff,stdout);

    return 0;
}