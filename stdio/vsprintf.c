#include <stdio.h>
#include <stdarg.h>


int MyVsprintf(char * ps, char * format,...){
    int n;
    va_list ap;
    va_start(ap,format);
    n=vsprintf(ps,format,ap);
    va_end(ap);

    return n;



}


int main(){
    char fuck[1024];

    int n=MyVsprintf(fuck,"My Name is %s Age is %d\n","hello,",33);
    fuck[n]='\0';
    printf("%s",fuck);



}