#include<stdio.h>
#include <string.h>


/**
 *          size_t strspn(const char *__s, const char *__charset);
 *          其中，__s 是要搜索的字符串，__charset 是包含一组字符的字符串。
 * 
 *  @brief :strspn 函数的名字中的 "spn" 是 "span" 的缩写。 跨度
 * 这个函数用于在字符串 __s 中查找一段连续的字符，
 * 这些字符都必须在 __charset 中，并返回这段连续字符的长度。
 * 
 * 
 * @brief : 查找第一个不在字符集里面的索引
 *          找不到返回__s的长度  s[长度]==false
 *      
 * 
*/

#include <stdbool.h>

bool charInStr(char ch,const char *str){
    for( ; *str; str++){
        if(ch==*str){
            return true;
        }
    }
    return false;
}

size_t Qstrspn(const char *str1,const char *chars){
    size_t n=0;
    for(;str1[n];n++){
        if(!charInStr(str1[n],chars))
            return n;
    }
    return n;
}

const char *ALL_CHARS="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM: ";


int main(){
    char str1[]="A!dmin:xiguataisweet Password:123456789";
    
    size_t n=strspn(str1,ALL_CHARS);

    printf("str1第%zu个字符不在ALL_CHARS里面,改字符是%c\n",n,(unsigned char)str1[n]);


#if 0
    printf("%zu\n",Qstrspn(str1,ALL_CHARS));
    printf("origin=%s\n",str1);
#endif

#if 0
    
    char *move=str1;
    size_t count=0;
    while(*move){
        count =Qstrspn(move,ALL_CHARS);
        if(move[count]){
            move[count]='*';
            move=&move[count];
        }else{
            break;
        }
        move++;
        
        
    }
    printf("result=%s\n",str1);

    
#endif

    return 0;
}