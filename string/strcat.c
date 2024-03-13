#include <stdio.h>
#include <string.h>


/**
 *      strcat(char *des,const char *src)
 *      拼接字符串
 *      在des
 * 
 * 
*/

void *Qstrcat(char *des,const char*src){
    char *tmp=des;
    while(*tmp) tmp++;
    strcpy(tmp,src);
    return des;
}



int main(){
    char tmp[20]="start ";
    printf("sizeof tmp=%lu strlen = %lu\n",sizeof(tmp),strlen(tmp));

    strcat(tmp," hello");
    // printf("%s")
    puts(tmp);
    return 0;

}