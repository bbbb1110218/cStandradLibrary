#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 *   @func:     int dirfd(DIR *dirp);
 *
 *   @brief     获取一个已经打开的目录的文件描述符
 *
 *   @param     dirp：一个已经打开的目录的 DIR 指针。

 *   @param
 *   @param
 *
 *   @return    dirfd 函数返回一个文件描述符，或者在错误时返回 -1。
 *
 *   @note  获取目录的文件描述符主要有以下几个用途：

            文件描述符操作：一旦你有了文件描述符，你就可以对它进行各种文件描述符操作，如fcntl、ioctl 等。

            打开目录中的文件：在某些情况下，你可能需要打开目录中的一个文件，但是你只有目录的文件描述符和文件的相对路径。在这种情况下，你可以使用openat函数，这个函数接受一个目录的文件描述符和一个相对于这个目录的路径，然后打开指定的文件。

            安全性：在多线程或多进程环境中，目录的路径可能会在你检查它和你使用它之间发生改变。这可能会导致安全问题，因为你可能会错误地操作一个你没有意图操作的文件。如果你有目录的文件描述符，你就可以避免这个问题，因为文件描述符总是指向你最初打开的目录，即使它的路径已经改变。

            性能：如果你频繁地访问同一个目录，使用文件描述符可能会比每次都使用路径更高效。这是因为文件描述符直接指向内核中的文件结构，而路径需要通过文件系统进行查找。
*/
int
main()
{

  DIR* dir = opendir("/path/to/directory");
  if (dir == NULL) {
    perror("opendir");
    return 1;
  }

  int fd = dirfd(dir);
  if (fd == -1) {
    perror("dirfd");
    return 1;
  }

  printf("The file descriptor of the directory is: %d\n", fd);

  closedir(dir);

  return 0;
}