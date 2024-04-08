#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/**
 *  @function : int vsnprintf(Buff,BuffMaxSize,format,ap)
 * 
 *  @brief: vsnprintf 自动根据format 的格式化内容 取 参数
 * 
 *  @param: Buff  缓存
 *  @param: BuffMAxSize  缓存容量
 *  @param: "format"    格式化的字符 like   "say hello to %s %d times "
 *                      vsnprint 自动根据 格式化的内容 自动在参数的栈空间取值 
 *                      上面的内容会取两次  %s 取一个char *
 *                                       %d 取一个int
 *  @param: ap 已经 va_start() 过的ap值
 * 
 * 
*/

int MyVsnPrintf(char *buff,int maxLen,const char *format,...){
    char *p=buff;
    va_list ap;
    va_start(ap,format);
    int n=vsnprintf(buff,maxLen,format,ap);
    va_end(ap);
    return n;
}

// #define BUFFSIZE 10

int main(){
    unsigned long BUFFSIZE=10;
    char Buff[BUFFSIZE];
    Buff[1]='\3';
    Buff[9]='\9';
    bzero(Buff,BUFFSIZE-1);
    int size=MyVsnPrintf(Buff,10,"%d %s %s",23,"fuck you bitch","hello");
    Buff[size]='\0';
    // printf(""
    puts(Buff);


    return 0;
	
}
