#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>


/**
 *   @func:             DIR * opendir(const char *dirpath)
 *        
 *   @brief             打开一个文件目录
 *      
 *   @param         dirpath  目录
 *   @param
 *   @param 
 * 
 *   @return        NULL if failed
 * 
 *   @note          
*/
int main(){
    const char *dirStr="/tmp";
    DIR* dir=opendir(dirStr);

    if(dir ==NULL){
        perror("opendir");
        exit(-1);
    }
    //对目录进行操作
    closedir(dir);

    return 0;
}