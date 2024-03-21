#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:         void *aligned_alloc(size_t __alignment, size_t __size);
 *        
 *   @brief         分配内存并且内存对齐
 *                 
 *                  
 *      
 *   @param  alignment 对齐值，必须是 2 的幂，并且至少为 sizeof(void*)。返回的内存地址将是这个值的整数倍。
 *   @param  size：要分配的内存的大小，必须是 alignment 的整数倍
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main(){



    int *arr=(int *)aligned_alloc(sizeof(void *), 10*sizeof(int *));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("aligned_alloc arr:%p\n",  arr);

    //malloc 不纪录分配的内存大小 需要自己记录
    printf("size of arr =%zd \n",  sizeof(arr));
    free(arr);




    return 0;
}