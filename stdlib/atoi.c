#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

int Qatoi(const char* str){
    int flag=1;
    int value=0;
    
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
    printf("%d\n",atoi(str1));
    printf("%d\n",Qatoi(str1));
    return 0;
}