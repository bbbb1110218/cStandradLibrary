#include<stdio.h>
#include<string.h> // Add missing include statement

/**
 * @brief: int	 fputs(const char * __restrict, FILE * __restrict) __DARWIN_ALIAS(fputs);
 *              puts(const char *__str) 
 *          
 * @like: 
 *  1. 把字符写入标准输出流
*/


int main(){
    const char * str="hello world";
    puts(str);
    return 0;
}
