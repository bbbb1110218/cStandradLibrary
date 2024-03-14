#include <string.h>
#include <stdio.h>
#include <locale.h>

/**
 * strxfrm 是 string transform 的缩写。这是一个 C 语言库函数，
 * 用于根据当前区域设置的规则，将源字符串转换为适合比较的形式。
 * 这个函数主要用于字符串的排序和比较操作。
 * 
*/

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // 设置区域为美国英语

    const char* s1 = "apple";
    const char* s2 = "apple2";

    char transformed_s1[50];
    char transformed_s2[50];

    // 使用 strxfrm 转换字符串
    strxfrm(transformed_s1, s1, sizeof(transformed_s1));
    strxfrm(transformed_s2, s2, sizeof(transformed_s2));

    // 比较转换后的字符串
    if(strcmp(transformed_s1, transformed_s2) < 0) {
        printf("%s comes before %s\n", s1, s2);
    } else {
        printf("%s comes after %s\n", s1, s2);
    }

    return 0;
}
