
#include <string.h>
#include <stdio.h>

/**
 * 将指定的内存区域清零。
 *
 * @param s 要清零的内存区域的起始地址
 * @param n 要清零的字节数
 */
/**
 * @brief Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * This function is used to clear a block of memory by setting all its bytes to zero.
 *
 * @param s Pointer to the memory area to be cleared.
 * @param n Number of bytes to be cleared.
 */



int main() {
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	bzero(str, 7);
	puts(str);
	return 0;
}

