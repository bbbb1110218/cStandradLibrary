#include <stdio.h>
#include <stdlib.h>
#include <sys/dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>


/**
 *   @func:         int readdir_r(DIR *dirp, struct dirent *entry, struct dirent **result);
 *        
 *   @brief:        dirent 意思是 directory entry  目录条目
 *                      
 *      
 *   @param     dirp：一个已经打开的目录的 DIR 指针。
 *   @param     entry：一个指向 struct dirent 结构的指针，readdir_r 函数将在这个结构中返回结果。
 *   @param     readdir_r 函数成功地读取了一个条目，那么它将设置 *result 为 entry 的地址。如果已经读取到了目录的末尾，那么它将设置 *result 为 NULL。
 * 
 *   @return   readdir_r 函数返回 0 表示成功，或者返回一个错误码表示失败。
 * 
 *   @note          readdir_r 函数是 readdir 函数的线程安全版本
 *                  尽管 readdir_r 函数是线程安全的，但是它已经被标记为废弃，并且在 glibc 2.24 
 *                  以后的版本中已经被移除。这是因为 readdir 函数在大多数实现中都是线程安全的，
 *                  而且 readdir_r 函数有一些不易发现的边界情况。所以，除非你有特殊的需求，否则你应该使用 readdir 函数而不是 readdir_r 函数。
*/
int main(){
    char strDir[BUFSIZ];
    if((realpath("..", strDir)==NULL)){
        fprintf(stderr,"RealPath error");
        exit(-1);
    }

    DIR *dir=opendir(strDir);
    if(NULL ==dir){
        fprintf(stderr,"opendir error");
        exit(-1);
    }
    struct dirent entry[1024], *result;
    int i=0;
    while (readdir_r(dir, &entry[i], &result) == 0 && result != NULL) {
        printf("Found file or directory: %s\n", entry[i].d_name);
        i++;
    }

   
    closedir(dir);
    return 0;
}