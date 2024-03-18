/**
 * @file main.c
 * @brief 示例程序，演示如何使用 system() 函数执行系统命令
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * @brief 执行一个系统命令并打印返回值
 * 
 * @param command 要执行的系统命令
 * @return 0 if success  else not 0
 */
int execute_command(const char *command) {
    // 使用 system() 函数执行命令
    int result = system(command);
    if(result){
        perror("system");
        exit(-1);
    }
    // 打印命令的返回值
    printf("Command '%s' returned %d\n", command, result);

    return result;
}

int main() {
    // 执行一个系统命令
    execute_command("ls -l /hello");

    return 0;
}
