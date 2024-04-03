#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/dirent.h>
#include <unistd.h>

/**
 *   @func:         long telldir(DIR *dirp);
 *
 *   @brief         你可以使用 telldir 函数保存当前的位置，然后在以后的某个时间点使用 seekdir 函数恢复到这个位置。
 *                  这对于在遍历大目录时可能是有用的，因为你可以在不需要重新开始遍历的情况下恢复到之前的位置。
 *
 *   @param         dirp：一个已经打开的目录的 DIR 指针。
 *   @param
 *   @param
 *
 *   @return       返回当前的位置   
 *
 *   @note         我首先使用 opendir 函数打开了一个目录。然后，我在一个循环中使用 readdir 函数读取目录中的每一个条目。对于每个条目，我打印了它的名称，然后使用 telldir 函数获取了当前的位置，并打印了这个位置。最后，我使用 closedir 函数关闭了目录。
 *  
 *   @output:   filename:[                   .],pos:[0]
                filename:[                  ..],pos:[1]
                filename:[      CMakeLists.txt],pos:[2]
                filename:[           .DS_Store],pos:[3]
                filename:[              locale],pos:[4]
                filename:[                test],pos:[5]
                filename:[              .debug],pos:[6]
                                                    ...
                                                    ...
                filename:[             openssl],pos:[26]
                filename:[              .cache],pos:[27]


 */
int main() {
  char strDir[BUFSIZ];
  if ((realpath("..", strDir) == NULL)) {
    fprintf(stderr, "RealPath error");
    exit(-1);
  }
  DIR *dir = opendir(strDir);
  if (dir == NULL) {
    perror("opendir");
    return 1;
  }
  struct dirent *entry;
  while ((entry = readdir(dir)) != NULL) {
    // printf("Found file or directory: %s\n", entry->d_name);

    // 获取并打印当前的位置
    long pos = telldir(dir);
    printf("filename:[%20s],pos:[%ld]\n",entry->d_name,pos);
  }

  closedir(dir);

  return 0;
}