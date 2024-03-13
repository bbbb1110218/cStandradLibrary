#include <stdio.h>
#include <string.h>


/**
 *   char * strchr(const char *str,int c);
 * 
 *   @brief:在字符串中查找字符
 *          返回第一次出现的位置
 *       如果没有找到返回NULL
 * 
 * 
 * 
*/

int main(){
    char str[]="hello";
    char str2[]="kitty";

    const char *p=strchr(str,'l');
    const char *p2=strchr(str2,'l');
    puts(p);
    puts("\n");
    puts(p2);
    return 0;
}