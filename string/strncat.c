#include <stdio.h>
#include <string.h>


/**
 *      char *strncat(char *__s1, const char *__s2, size_t __n);
 *      
 *     从s2拷贝n个字符到s1
 * 
 * 
*/

 char *Qstrncat(char *__s1, const char *__s2, size_t __n){
    char *p=__s1;
    while(*p)p++;  //找空字符
    strncpy(p,__s2,__n);
    
    return __s1;
 }


int main(){
    char s[20]="hello";
    char s2[20]=" kitty";
    printf("%s\n",Qstrncat(s,s2,strlen(s2)+1));

    return 0;

}