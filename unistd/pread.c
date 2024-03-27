#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>



/**
 *   @func:     ssize_t pread(int fd, void *buf, size_t count, off_t offset);
 *        
 *   @brief    带有偏移量的读取文件描述符
 *      
 *   @param  
 *   @param
 *   @param 
 * 
 *   @return  -1 if failed else read Size
 * 
 *   @note 
*/

int main() {
    char buf[256];
    int fd = open("file.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    ssize_t n = pread(fd, buf, sizeof(buf) - 1, 10);
    if (n == -1) {
        perror("pread");
        return 1;
    }

    buf[n] = '\0';
    printf("Read: %s\n", buf);

    close(fd);

    return 0;
}