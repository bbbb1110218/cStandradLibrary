#include <stdio.h>
#include <stdlib.h>
/*
 a64l 是一个 C 语言的库函数，用于将一个由可打印字符组成的字符串转换为长整型（long int）。
 这个函数使用一种特殊的 64 进制编码，
 其中字符 ./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 分别表示 0 到 63。
 */



int main() {
    const char *str = "?axxx";  // 在 a64l 编码中，'Z' 表示 35
    long int value = a64l(str);
    while((value = a64l(str)) ){
        printf("str:%s,Converted value: %ld\n",str, value);
        str++;
    }

    return 0;
}
