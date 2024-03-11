#include <stdio.h>
#include <string.h>
#include <assert.h>



/** 
 * int	 fputs(const char * __restrict, FILE * __restrict) __DARWIN_ALIAS(fputs);
size_t	 fread(void * __restrict __ptr, size_t __size, size_t __nitems, FILE * __restrict __stream);
*    @brief: __size 每次读取的字节数量，最好每次读取1个字节 才能正确返回读取的字节数量
*    
*    @return: 读取的项数量 
*              项的数量 * __size  才等于实际读取的字节数
*/

#define BUFFSIZE 1024
char buff[BUFFSIZE];

int main(int argc,char **argv){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt","r");
    assert(file !=NULL);

//fread是返回实际读取数量项的数量,每次最好读取一个字节
    size_t n=fread(buff,1,BUFFSIZE-1,file);

    printf("read data size =%lu\n",n);

    printf("data = %s",buff);

    fclose(file);
    return 0;


}