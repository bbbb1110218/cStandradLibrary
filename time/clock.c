#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function:  clock_t clock()
 * 
 * @brief:		clock 函数返回的是 clock_t 类型的值，
 * 				这个值表示的是程序启动到 clock 函数被调用时的 CPU 时间，单位是“时钟滴答”（clock ticks）。
				要将这个值转换为秒，你需要除以 CLOCKS_PER_SEC
 * 				
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:  返回程序启动的时间
 * 
 * @notice:
 * 
*/
int main() {
    clock_t start = clock();

    // Do some computation...
    for (long i = 0; i < 3000000000; i++);

    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("CPU time used: %f seconds\n", cpu_time_used);
    return 0;
}
