#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>


/**
 *   @func:             DIR *fdopendir(int) ;
 *        
 *   @brief             一个已经打开的目录的文件描述符
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return        NULL if faild
 * 
 *   @note 
*/
int main(){
    const char *path="..";    //上一级目录
    char absPath[1024];

    realpath(path, absPath);
    int fd = open(absPath, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    DIR *dir = fdopendir(fd);
    if (dir == NULL) {
        perror("fdopendir");
        return 1;
    }

    struct dirent *entry;
    char Buff[BUFSIZ];
    while ((entry = readdir(dir)) != NULL) {
        snprintf(Buff,BUFSIZ-1,"%s/%s",absPath,entry->d_name);
        // printf("Found file or directory: %s\n", entry->d_name);
        puts(Buff);
    }

    closedir(dir);

    return 0;
}