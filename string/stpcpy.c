#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
	stpcpy(des,src);
	自动计算src的长度，然后将src的内容复制到dest中，返回dest的尾部地址
 */


int main() {
    char src[] = "Hello, World!";
    char dest[50];

    char *p = stpcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Returned pointer points to: %s\n", p);
	
	int diff =(int) (p - dest);
	printf("Difference: %d\n", diff);
	printf("strlen(dest): %zu\n", strlen(dest));

    return 0;
}
