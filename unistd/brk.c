#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>


/**
 *   @func:    void* sbrk(int value)
 *        
 *   @brief:    调整堆指针 使用相对地址  sbrk(0) 获取当前堆指针的地址
 *   @return ：  0 for sucess  -1 for failed
 * 
 * 
 *   @func:     void *brk(const void *addr);
 *   @brief:    调整堆指针，使用绝对地址     
 * 
 *             brk：这个系统调用设置堆的末尾地址。如果你将新的末尾地址设置得比当前的末尾地址更高，那么堆将会增大，
 *              新分配的空间将被初始化为零。如果你将新的末尾地址设置得比当前的末尾地址更低，那么堆将会缩小，被释放的空间将返回给系统。
 *               
 *              0 for sucess  -1 for failed
 * 
 *   @param
 *   @param
 *   @param 
 * 
 *   @notice ： macos 无法使用 
 * 
 *   @note :  brk：这个系统调用设置堆的末尾地址。你需要提供一个指针，这个指针指向你希望设置为堆末尾的新位置。
 *              如果你将新的末尾地址设置得比当前的末尾地址更高，那么堆将会增大，新分配的空间将被初始化为零。
 *              如果你将新的末尾地址设置得比当前的末尾地址更低，那么堆将会缩小，被释放的空间将返回给系统。
 *                
 *            sbrk：这个系统调用通过增加或减少堆的大小来改变堆的末尾地址。你需要提供一个整数，这个整数表示你希
 *            望增加或减少的字节数。如果这个整数是正数，那么堆将会增大，新分配的空间将被初始化为零。如果这个整数
 *            是负数，那么堆将会缩小，被释放的空间将返回给系统。如果这个整数是零，那么 sbrk 将不会改变堆的大小，
 *            而只是返回当前的堆末尾地址。
*/

int main() {
    void *p1=sbrk(0);
    printf("p1 =%p\n",p1);

    void *p2=p1+0x100;
    if(brk(p2) == (void *)-1 && errno ){
        perror("brk");
        exit(EXIT_FAILURE);
    } 
    void *p3=sbrk(0);
    printf("p3=%p",p3);
    
    // if(p != (void*)-1){
    //     printf("p =%p\n",CurrentHeapPointer);
    // }else{
        // printf("P faild value = %p\n",CurrentHeapPointer);
    // }





    // int *arr=(int *)malloc(0x1000);
    // if(!arr){ perror("malloc");return 1;}
    // heap_end = sbrk(0);  // 获取当前堆的末尾地址
    // printf("Current heap end: %p\n", heap_end);
   
    // heap_end = sbrk(0);  // 获取当前堆的末尾地址
    // printf("Current heap end: %p\n", heap_end);


    // free(arr);
    // if (sbrk(4096) == (void*)-1) {  // 增加堆的大小
    //     perror("sbrk failed");
    //     return 1;
    // }

    // heap_end = sbrk(0);  // 获取新的堆的末尾地址
    // printf("New heap end: %p\n", heap_end);

    // if (brk(heap_end - 4096) == (void *)-1) {  // 减小堆的大小
    //     perror("brk failed");
    //     return 1;
    // }

    // heap_end = sbrk(0);  // 获取新的堆的末尾地址
    // printf("Final heap end: %p\n", heap_end);

    return 0;
}