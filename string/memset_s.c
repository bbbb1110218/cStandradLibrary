#include<stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * errno_t memset_s(void *v, rsize_t smax, int c, rsize_t n);
 * 
 * @notice: memset of secret 秘密
 *  
 * @param v 是要设置的内存块的指针，
 * @param smax 是内存块的大小，
 * @param c 是要设置的值，
 * @param n 是要设置的字节数。
 *   
 * @brief：memset_s 是一个 C11 标准库函数，用于将指定的内存块设置为特定的值。
 * 		与 memset 不同，memset_s 的行为在编译器优化时不会被忽略，
 * 		因此它更适合用于清除包含敏感数据的内存。
*/


int main() {
    char str[] = "Hello, World!";
    printf("Before memset_s: %s\n", str);

    // 使用 memset_s 将 str 的前 5 个字符设置为 '*'

	char *p=strchr(str,'l'); //找到 字符 ‘l’的指针


    if (memset_s(p, sizeof(str), '*', 2) != 0) {
        printf("Failed to set memory.\n");
        return 1;
    }

    printf("After memset_s: %s\n", str);

    return 0;
}