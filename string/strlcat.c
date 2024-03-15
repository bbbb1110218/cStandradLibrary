#include <string.h>
#include <stdio.h>


/**
 *      size_t	 strlcat(char *__dst, const char *__source, size_t __size);
 * 
 *      lcat 是 "length concatenate" 的缩写。这个函数用于将一个字符串（src）连接（concatenate）
 *      到另一个字符串（dst）的末尾，同时考虑了目标字符串的长度（length），以防止缓冲区溢出
 * 
 * 
*/


size_t Qstrlcat(char *first,const char *sec,size_t maxLen){
    char *move=first;
    const char *move2=sec;
    
    while(*move) move++;
    size_t size=move -first;

    while(*move2 && (maxLen > (move -first)+1))
        *move++=*move2++;
    size_t v1= size + strlen(sec);
    size_t v2=(move-first);
    return  (v1 > v2) ? v1:v2; 


}

int main() {
    char dst[20] = "Hello";
    char dst2[20] = "Hello";
    const char *src = ",World";
    const char *src2   = ",World";

    size_t result = strlcat(dst, src, sizeof(dst));

    printf("Result: %zu\n", result);
    printf("Destination: %s\n", dst);


    size_t result2 = Qstrlcat(dst2, src2, sizeof(dst2));

    printf("Result: %zu\n", result2);
    printf("Destination: %s\n", dst2);

    return 0;
}