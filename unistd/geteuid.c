/**
 * @file geteuid.c
 * @brief 示例程序，展示如何使用 geteuid 系统调用
 */

#include <stdio.h>
#include <unistd.h>

/**
 * @brief 主函数
 *
 * 这个函数调用 geteuid 系统调用，并打印返回的有效用户 ID。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */
int main() {
    // 获取有效用户 ID
    uid_t euid = geteuid();

    // 打印有效用户 ID
    printf("Effective user ID: %d\n", euid);

    return 0;
}
