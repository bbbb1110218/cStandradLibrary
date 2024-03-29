#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>

/**
 *   @func: int openat(int dirfd, const char *pathname, int flags);
 *   @func: int openat(int dirfd, const char *pathname, int flags, mode_t mode);
 *        
 *   @brief openat 函数的第一个参数 dirfd 是一个已经打开的目录的文件描述符。
            如果你提供的 pathname 是一个相对路径，那么这个路径将相对于 dirfd 所代表的目录进行解析。如果 pathname 是一个绝对路径，那么 dirfd 将被忽略。
 *      
 *   @param dirfd       目录路径
 *   @param pathname    文件名称如果是相对路径会在dirfd里面找 如果是绝对路径
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
#include <fcntl.h>
#include <unistd.h>
int main(){

    int dirfd = open("/tmp", O_RDONLY);
    if (dirfd == -1) {
        perror("open");
        return 1;
    }

    int fd = openat(dirfd, "file.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("openat");
        return 1;
    }

    // 现在，你可以使用 fd 来读写文件

    close(fd);
    close(dirfd);
}