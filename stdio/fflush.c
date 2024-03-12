#include <stdio.h>
#include <string.h>

/**@brief: fflush  刷新缓存 在文件
 * 
 * @note:在 C 语言中，当你向文件写入数据时，数据通常首先被写入到一个缓冲区，
 * 然后在适当的时候一次性写入到文件。这种缓冲机制可以提高写入文件的性能，因为一
 * 次性写入大量数据通常比多次写入小量数据更快。
 * 当你关闭文件时，所有未写入的数据会被自动写入到文件。所以，如果你没有显式地刷新
 * 缓冲区，数据会在文件关闭时被写入到文件。然而，有时你可能希望立即将数据写入到文件，
 * 而不等待文件关闭。在这种情况下，你可以使用 fflush 函数来刷新缓冲区。fflush 函数
 * 会将缓冲区的数据立即写入到文件，即使文件还没有被关闭。请注意，fflush 函数只对输出流有效。对于输入
 * 流，fflush 函数的行为是未定义的。如果你想清空输入流的缓冲区，你需要使用其他的方法，
 * 例如使用 fseek 函数。
 * 
*/

int main(){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","a+");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }
    // for(int i=0;i<10;i++)
         fprintf(file, "Hello, world!\n");
    fflush(file);
    getchar();
    // 在这里，"Hello, world!" 已经被写入到文件，即使文件还没有被关闭。

    fclose(file);
    return 0;

}