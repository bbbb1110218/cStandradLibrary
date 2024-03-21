#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:     valloc(size);
 *        
 *   @brief     分配内存并且内存对齐,返回的内存地址是页对齐的
 *              操作系统中的内存分配是以页为单位的，页的大小是4KB。valloc 函数会分配新的一个页的整数倍的内存。
 *              之前的内存分配malloc 只会分配指定大小的内存 用的是之前分配页没用完的内存，
 *              而valloc会分配一个页的整数倍的内存。
 *      
 *   @param size 为要分配的内存大小
 *   @param
 *   @param 
 * 
 *   @return NULL if memory allocation failed
 * 
 *   @note 
*/
int main(){
    int *ptr = (int *)malloc(5 * sizeof(int));

    int *arr=(int *)valloc(10*sizeof(int));
    int *arr2=(int *)valloc(10*sizeof(int));

    printf("malloc ptr:%p\n",  ptr);

    printf("valloc arr:%p\n",  arr);

    printf("valloc arr2:%p\n",  arr2);

    printf("arr2 -arr = %lu",(void*)arr2-(void*)arr);


    free(ptr);
    free(arr);
    free(arr2);


    return 0;
}