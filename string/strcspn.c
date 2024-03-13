#include <stdio.h>
#include <string.h>


/**
 *      size_t strcspn(const char *__s, const char *__charset);
 *      strcspn 函数的名字中的 "cspn" 是 "complement span" 的缩写。
 *      这个函数用于在字符串 __s 中查找第一个匹配 __charset 中任一字符的字符，
 *      并返回开始处到该处的距离。
 * 
 *      __charset 中的任何一个字符出现在__s里面 找到返回出现的索引
 *      
 *      找不到返回 __s的长度 strlen
 * 
*/

size_t Qstrcspn(const char *__s, const char *__charset){
    int n=0;
    for(;__s[n];n++){
        for(int i=0;__charset[i];i++)
            if(__s[n] == __charset[i])
                return n;
    }
    // if(!__s[n]) n++;
    return n;
}



int main() {
    const char *s = "hello, world";
    const char *charset = "t";

    size_t n = strcspn(s, charset);
     size_t n2 = Qstrcspn(s, charset);

    printf("%zu\n", n);  // 输出 "5"
    printf("%zu\n", n2);  // 输出 "5"
    if(!s[n])
        printf("function cant find charest\n");
    return 0;
}