#include<stdio.h>
#include <string.h>
#include <stdlib.h>


/**
	strdup(const char *);

	@brief:在栈上分配内存空间，然后将字符串拷贝到这个内存空间中，返回这个内存空间的地址
	@param: const char *str
	@return: char * 返回一个指向新分配的内存空间的指针，如果内存分配失败，返回NULL
 
 */


/**
 * 	strndum(const char * str,size_t malloc_Max_size);
 *
 * 
 * 
 * 
*/


int main()
{
	char *str = "Hello World";
	char *str2 = strdup(str);
	
	if(str2 == NULL)
	{
		printf("Memory not allocated");
		return 1;
	}else{
		printf("Origin string is : %s\n", str);
		printf("The duplicate string is : %s\n", str2);
		free(str2);	
	}

	char *str3=strndup(str,strlen(str)+1);

	if(!str3)
	{
		printf("Malloc Error");
		return -1;
	}
	printf("The duplicate string is : %s\n", str3);
	printf("the size of str3 = %zd\n",sizeof(str3));
	printf("the strlen of str3 = %zd\n",strlen(str3));

	
	free(str3);


	return 0;
}
