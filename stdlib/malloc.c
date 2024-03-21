#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:     void *malloc(size_t __size);
 *        
 *   @brief:    该函数分配指定大小的内存空间，返回指向该内存空间的指针。
 *      
 *   @param    __size: 要分配的内存空间的大小。
 *   @param
 *   @param 
 * 
 *   @return  返回指向分配的内存空间的指针，若分配失败则返回 NULL。
 * 
 *   @note 
*/
int main(){

    int *p = (int *)malloc(sizeof(int));
    if(p == NULL){
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    *p = 100;
    printf("*p = %d\n",*p);
    free(p);
    

    return 0;
}