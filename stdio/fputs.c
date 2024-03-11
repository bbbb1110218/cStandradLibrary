#include<stdio.h>
#include<string.h> // Add missing include statement

/**
 * @brief: int	 fputs(const char * __restrict, FILE * __restrict) __DARWIN_ALIAS(fputs);
 * @like: 
 *  1. 把字符写入文件流
*/

#define buffSize 1024
char Buff[buffSize];
int main(){
    

    int iVal=5;

    //int to string
    sprintf(Buff, "Fuck you bitch %d", iVal);
 

    fputs(Buff,stdout);
    
    //or

    


    return 0;
}