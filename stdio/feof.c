#include <stdio.h>

/**
 * int feof(FILE *stream);
 * 判断文件流stream是否已经到达文件尾，如果到达文件尾返回非0值，否则返回0。
 * 文件尾的字符为0xFF。也就是说，如果文件流stream已经到达文件尾,最后一个读取的字符应该是EOF。
 * 该函数通常用于判断文件读取是否结束。
 */

int main(){
    FILE *file = fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt","r");

    char ch;
    while(!feof(file)){
        ch=getc(file);
        if(ch !=EOF)
            printf("%c",(unsigned char )ch);

    }
    return 0;
}
