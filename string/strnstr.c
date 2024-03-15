#include <stdio.h>
#include <string.h>

/**
 * 
 *   char *strnstr(const char *str,const char *find,size_t checkLength);
 * 
 * 
**
 * @brief 在字符串中查找子字符串的第一次出现。
 *
 * @param haystack 要搜索的字符串。
 * @param needle 要查找的子字符串。
 *
 * @return 如果找到子字符串，则返回指向第一次出现的位置的指针；如果未找到，则返回 NULL。
 */


 char *Qstrnstr(const char *str,const char *find,size_t checkLength){
    size_t len=strlen(find);
    for(int i=0;i<checkLength;i++){
        if(!strncmp(&str[i],find,len))
            return (char *)&str[i];
    }

    return NULL;
}


int main(){
    char str1[]="HELLO kitty HELLO kitty hello kitty";
    const char *str2="tt";
    const char *p =Qstrnstr(str1,str2,strlen(str1)-strlen(str2));
    
    printf("%s\n",p);
        const char *p1 =strnstr(str1,str2,strlen(str1)-strlen(str2));
    
    printf("%s\n",p1);



    return 0;
}