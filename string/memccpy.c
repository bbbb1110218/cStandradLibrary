
#include <stdio.h>
#include <string.h>
/**
 
 
		void *memccpy(void *dest, const void *src, int c, size_t n);

		memory stop character while copying.
	@doc:
		从src拷贝n个字节到dest，直到c被找到。dest 包括c
		返回值指向c后面的字符，用于终止字符串。	
	@brief :
		from src copy n bytes to dest until c is found.

	@return:
		the character after c in dest.
		return value should be used to terminate the string.
		
		
 */


int main(){
	const char * src="Hello kitty";
	char des[100];
	char n='o';

	char *stop=memccpy(des,src,n,100);
	*stop='\0';
	printf("%s",des);
	return 0;
}
