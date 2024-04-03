#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *   @func:         void seekdir(DIR *dirp, long loc);
 *
 *   @brief
 *
 *   @param         dirp：一个已经打开的目录的 DIR 指针。
 *   @param         loc：一个由 telldir 函数返回的位置。
 *   @param
 *
 *   @return
 *
 *   @note
 */
int
main()
{
  char strDir[BUFSIZ];
  if ((realpath("..", strDir) == NULL)) {
    fprintf(stderr, "RealPath error");
    exit(-1);
  }
  DIR* dir = opendir(strDir);
  if (dir == NULL) {
    perror("opendir");
    return 1;
  }
  struct dirent* entry;
  long pos;

  // 读取并打印前两个条目
  for (int i = 0; i < 2; i++) {
    if ((entry = readdir(dir)) != NULL) {
      printf("Found file or directory: %s\n", entry->d_name);
      pos = telldir(dir);
    }
  }

  // 使用 seekdir 函数恢复到第二个条目的位置
  seekdir(dir, pos);

  // 重新读取并打印第二个条目
  if ((entry = readdir(dir)) != NULL) {
    printf("Seek later: %s\n", entry->d_name);
  }

  closedir(dir);

  return 0;
}