#include <stdio.h>
#include <string.h>


/**
 *  strncmp()函数用来比较s1和s2这两个字符串，比较长度为n个字符。
 * 
*/


int Qstrncmp(const char *s1, const char *s2, size_t n){
    for( ; n && *s1 && *s2; n--, s1++, s2++){
        if(*s1!=*s2){
            return *s1-*s2;
        }
    }
    if(!(*s1) ||!(*s2))
        return (*s1)?(*s1):0-(*s2);
        
    return 0;
}

int main(){
    char s1[20]="hello";
    char s2[20]="hello kitty";
    printf("%d\n",strncmp(s1,s2,6));
     printf("%d\n",Qstrncmp(s1,s2,6));

    return 0;
}