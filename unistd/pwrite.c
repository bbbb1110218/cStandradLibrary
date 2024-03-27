#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


/**
 *   @func:     ssize_t	 pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset)
 *        
 *   @brief     带有偏移量的写入文件n个字符
 *      
 *   @param   fd 文件描述符
 *   @param   buf 
 *   @param  
 * 
 *   @return 
 * 
 *   @note   当写入刚创建的文件的时候，如果带有偏移量，前面的数据会被填充为0
*/



int main() {

    const char *buf = "Hello, world!";
    int fd = open("deleteMe.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    ssize_t n = pwrite(fd, buf, 13, 0);
    if (n == -1) {
        perror("pwrite");
        return 1;
    }

    n = pwrite(fd, buf, 13, 1);
    if (n == -1) {
        perror("pwrite");
        return 1;
    }

    close(fd);

    return 0;
}

