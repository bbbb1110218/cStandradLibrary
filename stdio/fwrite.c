#include <stdio.h>
#include <string.h>


/**
 * size_t	 fwrite(const void * __restrict __ptr, size_t __size, size_t __nitems, FILE * __restrict __stream) __DARWIN_ALIAS(fwrite);
 * @brief:__ptr 指针
 *        __size 每次写入次数
 *        __nitems 写入多少次
 *       __stream   要求写入的文件流
 * 
 * @example:char *buff="hello";
 *          fwrite(buff,strlen(buff),1,fp); 返回写入成功的字节数量
 * 
 * @return:fwrite 的返回值是实际写入的数据项的数量
*/

int main(){
    FILE *file=fopen("deleteMe.txt","w");

    // int arr[]={2,3};

    char *buff="hello,kitty\n";
    // size_t size=fwrite(buff,strlen(buff),1,file);

//返回值是写入数据项的次数，一次数据项是1个字节 一共写入strlen(buff)次
    size_t size=fwrite(buff,1,strlen(buff),file);
    printf("Write Byte=%lu\n",size);


//每次写入strlen(buff)个字节，只写入一次
    size=fwrite(buff,strlen(buff),1,file);
    printf("Write Byte=%lu\n",size);
    
    
    fclose(file);
    // remove("deleteMe.txt");

    return 0;


}