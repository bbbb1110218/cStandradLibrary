



#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



/**
 * 
 *  mkstemp("包含 n个X 会变成随机字符 会被替换掉")确保文件的唯一名字
 * 
 *  @note：mkstemp 是 "make temporary" 的缩写，意思是创建一个临时文件。
 *   这个函数会生成一个唯一的临时文件名，然后创建并打开这个文件，返回这个文件的文件描述符。
 * 
*/
int main() {
    char template[] = "mytemp.X1XXXXXXXXXXX"; //
    int fd = mkstemp(template);

    if (fd == -1) {
        perror("Error creating temp file");
        return 1;
    }

    printf("Created temp file: %s\n", template);

    // 使用文件描述符 fd 进行文件操作...

    close(fd);  // 记得关闭文件

    remove(template);
    printf("Delete temp file: %s\n", template);


    return 0;
}