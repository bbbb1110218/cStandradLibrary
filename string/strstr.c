#include<stdio.h>
#include <string.h>


/**
 *  @function origin:
        char *strstr(const char *haystack, const char *needle);
        strstr 函数
声明
;
描述
strstr 函数在字符串 haystack 中查找第一次出现字符串 needle 的位置，该位置是一个指向 haystack 中的指针。
如果 needle 为空字符串，strstr 将返回 haystack 的开始位置。如果 needle 在 haystack 中不存在，strstr 将返回 NULL。

参数

如果 needle 是 haystack 的子字符串，那么 strstr 返回一个指向 haystack 中 needle 第一次出现的位置的指针。如果 needle 不是 haystack 的子字符串，那么 strstr 返回 NULL。
 *      
 * 
*/

char *Qstrstr(const char *s1,const char *s2){
    const char *p=s2;
    while(*p)p++;
    size_t size2=(size_t)(p-s2);
    printf("size = %zu\n",size2);

    const char *move=s1;
    while(*move){
        if((*move == *s2) && !strncmp(move,s2,size2))
            return move;
        move++;
    }
    

    // for(int i=0;s1[i];i++){
    //     if(s1[0] == s2[0] )
    //         if(!strncmp(&s1[i],s2,size2) )
    //             return &s1[i];
    // }
    return NULL;




}


const char *bigText="在6入字符串 s，对每个字符使用 in_charset 函数检查是否存在于字符集 charset 中。如果一个字符不在字符集中，我们就停止遍历，并返回当前的索引，这就是 s 中第一个不在 charset 中的字符前面的字符数。如果所有字符都在字符集中，我们就返回 s 的长度。";

int main(){
    const char *s1="Hello kitty 1";
    const char *s2="kitty";
    const char *find=strstr(s1,s2);
     const char *find2=Qstrstr(s1,s2);
    puts(find);
    puts(find2);

    printf("data=[%s]\n",Qstrstr(bigText,"字符"));
    return 0;
}