#include <stdio.h>
#include <string.h>


/**
 *      
 * memset_pattern4 是一个 macOS 系统特有的函数，用于将指定的 4 字节模式复制到目标内存块。

    函数原型如下：

void memset_pattern4(void *b, const void *pattern4, size_t len);
    其中，b 是目标内存块的指针，
    pattern4 是一个指向 4 字节模式的指针，
    len 是要设置的字节数。

以下是一个使用 memset_pattern4 的示例代码
 * 
*/




#include <string.h>ç
#include <stdio.h>


void Qmemset_pattern4(void *buf,void *flag,size_t bufsiz){
    int *tmp     =       (int*)buf;
    int value    =      *(int *)flag;
    for(int i=0;i < bufsiz /sizeof(int);i++)
            
        tmp[i]= value;

}

int main() {
    char buffer[32];
    char buffer2[32];
    int pattern = 0x12345678;


    // 使用 memset_pattern4 将 buffer 设置为 pattern
    memset_pattern4(buffer, &pattern, sizeof(buffer));
     Qmemset_pattern4(buffer2, &pattern, sizeof(buffer2));
    // 打印 buffer 的内容
    for (int i = 0; i < sizeof(buffer) / sizeof(int); i++) {
        printf("%#010x ", ((int*)buffer)[i]);
    }

    puts("\n");
    for (int i = 0; i < sizeof(buffer2) / sizeof(int); i++) {
        printf("%#010x ", ((int*)buffer2)[i]);
    }
    printf("\n");

    return 0;
}