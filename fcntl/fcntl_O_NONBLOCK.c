#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

/**
 *   @func:         int flags = fcntl(fd, F_GETFL);  
 *                  flags |= O_NONBLOCK;
 *                  fcntl(fd, F_SETFL, flags) == -1
 * 
 *                  F_GETFL 是 get file status flags 的简写 获取文件状态标志 
 *                  
 *        
 *   @brief       设置文件非阻塞，只是告诉操作系统希望i/o的时候，如果不能立刻完成的时候立刻返回
 *                而不是阻塞进程
 *                
 *      
 *   @param      
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note  read    返回值有3个 
 *          -1      读取错误 或者资源暂时不可以用
 *          0       没有数据可读了
 *          其他     实际读取的字节数量
 * 
 *  @notice  读取socket得时候 如果读取为-1 代表当前没有数据可以读
 *           如果读取的为 0  代表对方已经关闭了 socket 
*/

int main() {
    int fd = open("template.c", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // 获取当前的文件状态标志
    int flags = fcntl(fd, F_GETFL);
    if (flags == -1) {
        perror("fcntl");
        return 1;
    }

    // 设置非阻塞标志
    flags |= O_NONBLOCK;

    // 更新文件状态标志
    if (fcntl(fd, F_SETFL, flags) == -1) {
        perror("fcntl");
        return 1;
    }

    // 现在，如果 read 操作不能立即完成，它将返回一个错误，而不是阻塞进程
    char buffer[10];
    ssize_t numRead;
    while((numRead = read(fd, buffer, sizeof(buffer)-1)))
    {
        if (numRead == -1) {
            //EAGAIN        资源暂时不可以用
            //EWOULDBLOCK   操作会被阻塞
            if (errno == EAGAIN || errno == EWOULDBLOCK) 
            {
                printf("No data available, will try again later\n");
            }else {
                perror("read");
                return 1;
            }
        }
        buffer[numRead]='\0';
        printf("%s",buffer);

    }




    close(fd);

    return 0;
}