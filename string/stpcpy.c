#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
	stpcpy(des,src);
	自动计算src的长度，然后将src的内容复制到dest中，返回dest的尾部地址 '\0'的地址
 */


int main() {
    char src[] = "AAA";
    char dest[500];
    memset(dest,0,500);

    char *p = stpcpy(dest, src);



    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Returned pointer points to: %s\n", p);
	
	int diff =(int) (p - dest);
	printf("Difference: %d\n", diff);
	printf("strlen(dest): %zu\n", strlen(dest));

    const char *str="函数stpcpy之后返回值 会指向下一个字符(\\0)后面的字符地址";
    strncpy(p+1,str,strlen(str)+1);
    puts(p);


    char *tmp=dest;
    while(*tmp){
        puts(tmp);
        putchar(10);
        tmp=tmp+strlen(tmp)+1;

    }

    return 0;
}
