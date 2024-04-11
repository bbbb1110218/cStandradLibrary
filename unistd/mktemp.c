#include <stdio.h>
#include <unistd.h>


/**
 *   @func: char *   mktemp(char *template);
 *        
 *   @brief:    把template 里面的X字符换掉，并且指向该字符
 *   @param: char *template 必须是一个char 数组 
 *              不能是 char *的指针，要不然会被分配到静态区域
 *              需要包含大写的字母 XXXXXX 会被换掉
 *      
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main(){

    char templat[] ="/temp/XXXXXXXXXXXXXXXXXXXX";
    printf("before temp = %s\n",templat);
    char *name = mktemp(templat);
    // printf("XXXXX会被替换掉")
    printf("later templat = %s\n",templat);
    printf("返回值也指向了templat name=  %s\n",name);


    return 0;
}