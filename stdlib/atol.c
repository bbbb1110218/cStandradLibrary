#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

long Qatol(const char* str){
    long flag=1;
    long value=0;
    
    while(*str ==' ')str++;

    if(*str =='-'){
        flag = 0-flag;
        str++;
    }

    while(*str >= '0' && *str <= '9'){
        value = (*str -'0') + value *10;
        str++;
    }
    return flag *value;
}

int main(){
    char *str1="50.6";
    printf("%ld\n",atol(str1));
    printf("%ld\n",Qatol(str1));
    return 0;
}