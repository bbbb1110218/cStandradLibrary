#include <unistd.h>
#include <stdio.h>

/**
	

  readlink("link path", "buffer", "buffer size")
	- link path: path to the symlink
   @brief:读符号连接的目标文件名
   @return:成功返回读取的字符数，失败返回-1
 
 */

int main() {
    char buffer[1024];
    ssize_t len = readlink("/Users/min122218/Github", buffer, sizeof(buffer) - 1);
    if (len != -1) {
        buffer[len] = '\0';
        printf("Symlink points to: %s\n", buffer);
    } else {
        perror("readlink");
        return 1;
    }

    return 0;
}
