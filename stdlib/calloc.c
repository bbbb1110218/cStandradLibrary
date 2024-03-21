#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:  calloc(itemCount,sizeof(itemSize));
 * 
 *        
 *   @brief  分配内存并初始化为0
 *            itemCount: 为要分配的元素个数
 *            itemSize: 为每个元素的大小
 *            返回值: 指向分配内存的指针
 *      
 *   @param 
 *   @param
 *   @param 
 * 
 *   @return  poiter to the allocated memory  
 *            NULL if memory allocation failed
 * 
 *   @note 
*/
int main(){

    int size=5;

    int *ptr = (int *)calloc(size, sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < size; i++){
        // printf("%d\n", 
        ptr[i] =i;
        // );
    }

    for(int i = 0; i < size; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);


    return 0;
}