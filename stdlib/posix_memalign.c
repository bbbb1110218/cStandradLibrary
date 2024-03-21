#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:         int posix_memalign(void **memptr, size_t alignment, size_t size);
 *        
 *   @brief        
 *                  
 *      
 *   @param  memptr：一个指向指针的指针，用于接收新分配的内存的地址。
 *   @param  alignment：对齐值，必须是 2 的幂，并且至少为 sizeof(void*)。返回的内存地址将是这个值的整数倍。
 *   @param  size：要分配的内存的大小。 不是对齐值的整数倍
 * 
 *   @return  如果成功，posix_memalign 将新分配的内存的地址存储在 memptr 指向的位置，并返回 0。如果失败，返回一个非零错误码。
 * 
 *   @note 
*/

int main() {
    size_t alignment = 16;
    size_t size = 2;
    void *ptr = NULL;

    if (posix_memalign(&ptr, alignment, size-1) != 0) {
        printf("posix_memalign failed\n");
        return 1;
    }

    printf("ptr: %p\n", ptr);

    // 使用 ptr...

    free(ptr);
    return 0;
}



