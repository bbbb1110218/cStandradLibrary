/**
 * 
 *  @function int heapsort(void *__base, size_t __nel, size_t __width,
                            int (* _Nonnull __compar)(const void *, const void *));

 * @brief:`heapsort` 函数执行堆排序算法，它是一种高效的排序算法，特别适合对大型数组进行排序。
 * @param __base：要排序的数组的首地址。
 * @param __nel：数组中元素的数量。
 * @param __width：每个元素的大小（以字节为单位）。
 * @param __compar：比较函数，用于确定两个元素之间的顺序。它应该返回一个整数，表示：
                                                -1：第一个元素小于第二个元素
                                                0：两个元素相等
                                                1：第一个元素大于第二个元素
    **定义比较函数：**定义一个比较函数，该函数将用于确定数组元素之间的顺序。此函数应遵循声明为 `int (* _Nonnull __compar)(const void *, const void *)` 的签名。

 * 
 * 
 * 
 * 
 * @return *如果 `heapsort` 函数执行成功，它将返回 0。否则，它将返回一个非 0 值，指示出错。
 * 
 * 
 * @output 
 *                           
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    int *ia = (int *)a;
    int *ib = (int *)b;
    return *ia - *ib;
}

int main() {
    srand(time(NULL));
    unsigned int a=5;
    int arr[100] ={};
    for(int i=0;i<100;i++){
       arr[i]=rand_r(&a) % 1000;

    }
    size_t nel = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr, nel, sizeof(int), compare);

    for (size_t i = 0; i < nel; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
