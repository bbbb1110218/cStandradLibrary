#include <stdio.h>
#include <stdlib.h>
#include <sys/dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>


/**
 *   @func:         struct dirent *readdir(DIR *dirp);
 *        
 *   @brief:        dirent 意思是 directory entry  目录条目
 *                      
 *      
 *   @param         dirp 的指针 可以用opendir("dirpath") 获取
 *   @param
 *   @param 
 * 
 *   @return        struct dirent* 指针 struct directory entry *的简写
 *                  当没有了，就返回NULL
 * 
 *   @note          需要循环便利 untill return NULL 
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

    char Buff[1024];

    struct dirent *entry; //目录条目指针
    while((entry =readdir(dir)) !=NULL){
        snprintf(Buff,1024,"%s/%s",strDir,entry->d_name);
        puts(Buff);

    }


   
    closedir(dir);
    return 0;
}