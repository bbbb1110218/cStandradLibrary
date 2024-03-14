#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>

int main() {

    FILE *fp=fopen("NotExistFile.txt","r");
    char buff[1024];

    if(!fp){
        strerror_r(errno,buff,1024) ;
        printf("strerror_t 的作用是 把error存储在一个字符数组中\n%s\n",buff);   
    }
    return 0;
}
