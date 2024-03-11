#include <stdio.h>
#include <stdarg.h>
#include <string.h>



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
