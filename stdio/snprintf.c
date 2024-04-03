#include <stdio.h>
#include <string.h>
#include <stdarg.h>




/**
 * @brief: int snprintf(des,max_size,"format",...);
 * 
 * @return finally strlen(des);
*/


void ShowFormat(const char *format,...){
    va_list ap;
    va_start(ap,format);
    char Buff[BUFSIZ]; //缓存

    //n为buff占用的字符个数
    size_t n=vsnprintf(Buff,BUFSIZ,format,ap);
    
    //标记一下最后一个字符
    Buff[n]='\0';
    va_end(ap);
    
    //put it to stdout
    puts(Buff);

}




int main(){
#if defined(__APPLE__)  || defined(__APPLE__)
    ShowFormat("My name is %s,age =%d,feet = %.5f","xigua",32,24.5f);
#else  
    puts("not defined __apple__");
#endif 
    return 0;

}