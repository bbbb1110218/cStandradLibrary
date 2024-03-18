#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 *  const char *str = "你好呀";  // 一个包含多字节字符的字符串
 * int len = mblen(str, MB_CUR_MAX);  // 计算第一个多字节字符的长度
 *  
 *  计算第一个字符的长度
 * 
*/

int main() {
    setlocale(LC_ALL, "");  // 设置本地化环境，以支持本地的字符集

    const char *str = "你好呀";  // 一个包含多字节字符的字符串
    int len = mblen(str, MB_CUR_MAX);  // 计算第一个多字节字符的长度

    const char *m=str;
    
    while(*m){
        len=mblen(m,MB_CUR_MAX);
        printf("len =%d the first Muti char of %s\n",len,m);
        m   += len;
    }


    



    return 0;
}