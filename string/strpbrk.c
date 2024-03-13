#include <stdio.h>
#include <string.h>


/**
 *      strpbrk 函数的名字中的 "pbrk" 可以理解为 "pointer break"。
 *        这个函数用于在字符串 __s 中查找第一个匹配 __charset 中任一字符的字符，并返回一个指向该字符的指针。
        函数原型如下：
        char *strpbrk(const char *__s, const char *__charset);
        
 * 
*/

char *Qstrpbrk(const char *__s, const char *__charset){
    const char *p=__s;
    while(*p){
        for(int i=0;__charset[i];i++)
        {
            if(*p == __charset[i]){
                return p;
            }
            
        }
        p++;
    }
    return NULL;
}

int main(){
    char s[20]="hello";
    printf("%s\n",strpbrk(s,"x"));
    printf("%s\n",Qstrpbrk(s,"x"));
    printf("%s\n",strpbrk(s,"leh"));
    printf("%s\n",Qstrpbrk(s,"leh"));

    return 0;
}