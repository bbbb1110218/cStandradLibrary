#include <stdio.h>
#include <unistd.h>


/**
 *   @func:     int fsync(int fd);
 *        
 *   @brief     这个函数接受一个参数，即你想要同步的文件描述符。
 *              fsync 函数会将该文件描述符的所有未写入的数据写入磁盘，然后返回。
 *      
 *   @param fd file describtion
 *   @param
 *   @param 
 * 
 *   @return  如果写入成功，fsync 函数返回 0；如果发生错误，fsync 函数返回 -1 并设置 errno。
 * 
 *   @note    当写入某个文件的时候，会把数据写入缓存，然后关闭的时候一次性写入
 *            当你在程序中写入文件时，操作系统通常会将数据写入到一个缓冲区，
 *            而不是立即写入到磁盘。这种技术被称为缓冲写入，可以提高文件系统的性能。
 *            当你关闭文件时，操作系统会将缓冲区中的所有数据写入到磁盘。然而，在某些情况下，
 *            你可能需要在关闭文件之前就确保所有的数据都已写入到磁盘。例如，如果你的程序正在处理重要的数据，
 *            你可能希望在程序崩溃或电源中断之前就将数据保存到磁盘。
 *            在这种情况下，你可以使用 fsync 函数。fsync 函数会将指定的文件描述符的所有未写入的数据强制写入到磁盘，
 *            然后返回。这样，你就可以确保所有的数据都已经安全地保存到磁盘，即使你的程序在关闭文件之前崩溃或电源中断。
*/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("deleteMe.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    write(fd, "Hello, world!", 13);

    if (fsync(fd) == -1) {
        perror("fsync");
        return 1;
    }

    close(fd);

    return 0;
}