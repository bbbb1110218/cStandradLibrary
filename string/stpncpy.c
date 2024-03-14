#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
	stpcpy(des,src,size n);
	最多拷贝n个src的字符复制到dest中，返回dest的尾部地址 *返回值可以等于 '\0'
 */


int main() {
    char src[] = "Hello, World!";
    char dest[6];
    dest[5]='\3';
    

    char *p = stpncpy(dest, src,5);
    *p='\0';

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Returned pointer points to: %s\n", p);
	
	int diff =(int) (p - dest);
	printf("Difference: %d\n", diff);
	printf("strlen(dest): %zu\n", strlen(dest));

    return 0;
}
