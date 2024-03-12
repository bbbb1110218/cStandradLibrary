#include <stdio.h>
#include <string.h>

/**@brief: fgetc 从文本中读取一个字符
 * 
 * @note:
 * 在 C 语言中，标准输出（stdout）通常是行缓冲的。这意味着，当你向 stdout \
 * 写入数据时，数据首先被写入到一个缓冲区。只有当缓冲区满了，或者你写入了一个换行符
 * ，或者你调用了 fflush 函数，数据才会被写入到目标。在你的代码中，你在
 * 每次调用 putc 函数后立即调用了 fflush(stdout)。这会强制将 stdout
 *  的缓冲区的数据立即写入到目标。这意味着，每个字符都会立即被写入到标准输出
 * ，而不是等待缓冲区满了或者写入了一个换行符才写入。请注意，不是所有的系统
 * 和编译器都会对 stdout 使用行缓冲。在某些系统和编译器中，stdout 可能是
 * 全缓冲的，这意味着只有当缓冲区满了或者你调用了 fflush 函数，数据才会被
 * 写入到目标。在这种情况下，如果你想立即看到输出，你需要调用 fflush(stdo
 * ut)。
*/

int main(){    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","r+");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }


    char ch;
    while((ch=fgetc(file)) !=EOF){
        putc(ch,stdout);
        fflush(stdout);
    }
       

    fclose(file);
    return 0;

}