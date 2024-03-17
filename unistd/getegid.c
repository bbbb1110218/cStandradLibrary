/**
 * @file getegid.c
 * @brief 示例程序，展示如何使用 getegid 系统调用
 */

#include <stdio.h>
#include <unistd.h>

/**
 * @brief 主函数
 *
 * 这个函数调用 getegid 系统调用，并打印返回的有效组 ID。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */
int main() {
    // 获取有效组 ID
    gid_t egid = getegid();

    // 打印有效组 ID
    printf("Effective group ID: %d\n", egid);

    return 0;
}
