#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 *   @func: int getsubopt(char **optionp, char *const *tokens, char **valuep);
 *        
 *   @brief getsubopt 函数用于解析子选项字符串。这个函数通常用于处理那些包含子选项的命令行参数。
 *      
 *   @param optionp 是一个指向选项字符串的指针的指针。
            getsubopt 函数会修改这个指针，使其指向下一个子选项。
 *   @param tokens 是一个指向子选项名称数组的指针。这个数组必须以 NULL 结尾。
 *   @param valuep 是一个指向字符指针的指针。如果子选项有值，getsubopt 函数会设置这个指针指向这个值。
 * 
 *   @return getsubopt 函数在成功时返回找到的子选项在 tokens 数组中的索引，在失败时返回 -1。
 * 
 *   @note 
*/
#include <unistd.h>
#include <stdio.h>

// char *QgetSubOpt(char ** p,char *const *key,char **storeValue){
    
    
//     if(**p =='\0') return NULL;
//     static int n=0;
//     char *move = *p;
//     char *compare = key[n++];
//     if(!compare )   return NULL;
   
// }



int main() {
    printf("current pid =%d\n",getpid());
    char *option = strdup("color=blue,fruit=apple,size=");  //在堆上分配内存
    char *const tokens[] = { "fruit","color", "hello","size", NULL};
    char *value;

    while (*option != '\0') {
        switch (getsubopt(&option, tokens, &value)) {
        case 0:
            printf("Color: %s\n", value);
            break;
        case 1:
            printf("Fruit: %s\n", value);
            break;
        case 2:
            printf("Size\n");
            break;
        default:
            printf("Unknown option\n");
            break;
        }
    }

    // free(option);

    printf("Last:%s\n",option);
    return 0;
}