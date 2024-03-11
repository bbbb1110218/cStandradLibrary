#include <stdio.h>
#include <stdarg.h>

/**
 * @brief:v开始的函数是va_list
 * @brief:在 C 语言的 <stdio.h> 库中，以 v 开头的函数
 * （如 vprintf, vfprintf, vsprintf, vsnprintf, vscanf, vfscanf, vsscanf 等）
 *  是用于处理可变参数列表的。
*/



void MyPrintf(const char *format,...){
    va_list ap;
    va_start(ap,format);
    vprintf(format,ap);
    va_end(ap);
}


int main(){
    MyPrintf("Hello %s,My name is %d years old","xigua",123);
    return 0;
}