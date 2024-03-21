#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:     realloc(ptr, newSize);
 * 
 *        
 *   @brief     重新分配内存
 *              realloc 函数用于改变已分配内存的大小。如果新的大小大于原来的大小，那么 realloc 函数会分配更多的内存，
 *              并将原来的数据复制到新的内存中。如果新的大小小于原来的大小，那么 realloc 函数会释放多余的内存，并保留原来的数据。

                需要注意的是，realloc 函数只会复制原来的数据，不会初始化新分配的内存。也就是说，如果新的大小大于原来的大小，
                那么新分配的内存中的数据是未定义的。

                在你的代码中，你使用 realloc 函数将 ptr 指向的内存的大小从 size 增加到 newSize。然后，你打印了 ptr 指向的内存中的所有数据。
                如果 newSize 大于 size，那么打印的结果中，前 size 个数字是原来的数据，后面的数字是未定义的。
 *      
 *   @param 
 *   @param
 *   @param 
 * 
 *   @return  poiter to the allocated memory
 * 
 *   @note 
*/
int main(){

    int size=5;

    int *ptr = (int *)calloc(size, sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }else{
        printf("First memory allocation success :%p\n", ptr);
    }

    for(int i = 0; i < size; i++){
        // printf("%d\n", 
        ptr[i] =i;
        // );
    }

    for(int i = 0; i < size; i++){
        printf("%d\n", ptr[i]);
    }

    int newSize = 10;
    ptr = (int *)realloc(ptr, newSize * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }else{
        printf("Second memory allocation success :%p\n", ptr);
    }

    for(int i = 0; i < newSize; i++){
        // printf("%d\n", 
        printf("%d\n", ptr[i]);
        // );
    }



    free(ptr);


    return 0;
}