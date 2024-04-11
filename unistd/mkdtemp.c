#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

/**
 *   @func:         char * mkdtemp(char *template);
 *        
 *   @brief:    
 *   @param:    template 必须是一个char 数组 而且包含X大些字母 会被替换掉    
 *              
 *              
 *      
 *   @param
 *   @param 
 * 
 *   @return  返回一个template(X被替换掉)的指针
 * 
 *   @note   路径名称要存在 要不然会出错
*/
int main(){

    char templat[] ="/tmp/DIR_1XXXXXXXXXXXXXXXXXXXX";
    char *dirName = mkdtemp(templat);


    if(!dirName)
    {
        perror("mkdtemp");
        return -1;
    }

    DIR *dir = opendir(dirName);
    if(!dir)
    {
        perror("opendir");
        return -1;
    }else{
        printf("open dir success:\n%s\n",dirName);
        closedir(dir);
    }   





    return 0;
}