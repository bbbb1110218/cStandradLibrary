/**
 * @file isatty_example.c
 * @brief 示例程序，展示如何使用 isatty 函数
 */

#include <stdio.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * @brief 主函数
 *
 * 这个函数调用 isatty 函数来检查标准输入、标准输出和标准错误是否是终端设备。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */
int main() {

    /**你创建了一个新的文件 /tmp/test.txt，并获取了它的文件描述符 fd。
    然后你使用 isatty(fd) 来检查这个文件是否是一个终端设备。
    因为 /tmp/test.txt 是一个普通文件，不是一个终端设备，
    所以 isatty(fd) 应该返回 0，表示 fd 不是一个终端设备。*/

	int fd=open("/tmp/test.txt",O_RDWR|O_CREAT |O_TRUNC,0666);
    if(isatty(fd)){
        printf("new file is a terminal");

    }else{
        printf("new file is not a terminal");
    }
    // 检查标准输入是否是终端设备
    if (isatty(STDIN_FILENO)) {
        printf("Standard input is a terminal.\n");
    } else {
        printf("Standard input is not a terminal.\n");
    }

    // 检查标准输出是否是终端设备
    if (isatty(STDOUT_FILENO)) {
        printf("Standard output is a terminal.\n");
    } else {
        printf("Standard output is not a terminal.\n");
    }

    // 检查标准错误是否是终端设备
    if (isatty(STDERR_FILENO)) {

        
        dup2(fd,STDERR_FILENO);//need check 
        fprintf(stderr,"hello,butbut");
        printf("Standard error is a terminal.\n");
    } else {
        printf("Standard error is not a terminal.\n");
    }

    close(fd);

    return 0;
}
