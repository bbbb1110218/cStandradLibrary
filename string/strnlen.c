#include<stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * 			strnlen(const char *str,size_t n)
 * 		@param:
 * 			计算str的字符长度，但是最大不超过n 
 * 		     没什么意义
 * 		 
 * 
*/


int main()
{
	char *str = "Hello World";
	size_t len =strnlen(str,5);


 printf("Length of string is: %zu\n", len);



	return 0;
}
