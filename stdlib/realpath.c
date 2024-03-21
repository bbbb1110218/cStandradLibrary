#include <stdio.h>
#include <stdlib.h>


/**
 *   @func: realpath(const char *path, char *resolved_path)
 *        
 *   @brief: 该函数将参数 path 所指的相对路径转换为绝对路径，并将结果存于 resolved_path 所指的内存空间。
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return  返回值为 resolved_path 的地址，若转换失败则返回 NULL。
 * 
 *   @note 
*/
int main(){

    char *path = "../..";
    char abs_path[100]; //绝对路径

    if(realpath(path,abs_path) == NULL){
        perror("realpath");
        exit(EXIT_FAILURE);
    }
    printf("from Path: %s to Path: %s\n",path,abs_path);


    return 0;
}