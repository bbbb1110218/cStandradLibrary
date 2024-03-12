#include <stdio.h>
#include <stdlib.h>

/**     asprintf(char **paddr,"format",...);
 * 
 * @brief: asprintf 会在函数里面malloc
 *         第一个参数是指针的地址
 *         最后记得free掉
 * 
 * @return : 字符大小 else -1 if error 
 * 
 * 
 * 
*/

int main(){
    char *str;
    int n=asprintf(&str, "Helo %s %d", "kitty",12);
    if(n ==-1){
        perror("asprintf");
        exit(-1);
    }
    free(str);
    return 0;
}