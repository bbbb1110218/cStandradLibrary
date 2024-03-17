/**
 * @file ttyname_example.c
 * @brief 示例程序，展示如何使用 ttyname 函数
 */

#include <stdio.h>
#include <unistd.h>

/**
 * @brief 主函数
 *
 * 这个函数调用 ttyname 函数来获取标准输入、标准输出和标准错误的终端设备名称。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */
int main() {
    // 获取标准输入的终端设备名称
    char *name = ttyname(STDIN_FILENO);
    if (name) {
        printf("Standard input: %s\n", name);
    } else {
        printf("Standard input is not a terminal.\n");
    }

    // 获取标准输出的终端设备名称
    name = ttyname(STDOUT_FILENO);
    if (name) {
        printf("Standard output: %s\n", name);
    } else {
        printf("Standard output is not a terminal.\n");
    }

    // 获取标准错误的终端设备名称
    name = ttyname(STDERR_FILENO);
    if (name) {
        printf("Standard error: %s\n", name);
    } else {
        printf("Standard error is not a terminal.\n");
    }

    return 0;
}
