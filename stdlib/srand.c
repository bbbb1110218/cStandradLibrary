/**
 * @file main.c
 * @brief 示例程序，演示如何使用 srand() 函数生成随机数
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**  srand(unsigned int)
 * 
 * @brief (unsigned int)time(NULL) 选用随机时间 才是真的随机，要不然就固定了
 * @brief 生成并打印 n 个 [0, range) 范围内的随机数
 * 
 * @param n 要生成的随机数的数量
 * @param range 随机数的上限（不包含）
 */
void print_random_numbers(int n, int range) {
    // 使用当前时间作为随机数生成器的种子
    // srand((unsigned int)time(NULL));
    srand(1);

    for (int i = 0; i < n; i++) {
        int random_number = rand() % range;
        printf("%d ", random_number);
    }

    printf("\n");
}

int main() {
    // 打印 10 个 [0, 100) 范围内的随机数
    print_random_numbers(10, 100);

    return 0;
}
