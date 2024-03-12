#include <stdio.h>
#include <stdarg.h>


int MyVfprintf(FILE * fp, char * format,...){
    int n;
    va_list ap;
    va_start(ap,format);
    n=vfprintf(fp,format,ap);
    va_end(ap);
    return n;


}


int main(){
    MyVfprintf(stdout,"My name is %s And age is %d","xigua",23);
    return 0;

}