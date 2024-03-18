#include <stdio.h>
#include <stdlib.h>


/**
     mktemp(template);
 * 
 * mktemp 是一个 C 语言的库函数，用于生成一个唯一的临时文件名。这个函数接受一个模板字符串作为参数，
 * 这个字符串应该以 'XXXXXX' 结尾。mktemp 函数会替换这些 'X' 字符为一个唯一的字符串，然后返回修改后的字符串。
 *  新建临时文件夹 已经被弃用
 * 
*/
int main() {
    char template[] = "/tmp/mytemp.XXXXXX";
    char *temp_filename = mktemp(template);

    if (temp_filename != NULL) {
        printf("Generated temp filename: %s\n", temp_filename);
    } else {
        printf("Failed to generate temp filename\n");
    }

    return 0;
}
