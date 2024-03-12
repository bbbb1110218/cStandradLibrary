#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(){

for(int i=0;i< sys_nerr;i++){


    printf("%d >> %s\n",i,sys_errlist[i]);
    printf("%d >> %s\n",i,strerror(i) );


}
return 0;
}


