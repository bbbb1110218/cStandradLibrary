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
    struct dirent *entry;
    char dirhead[BUFSIZ];
    struct stat st;
    while((entry = readdir(dir)) !=NULL){
        if(!strncmp(entry->d_name,".",1) || !strncmp(entry->d_name,"..",2))continue;

        snprintf(dirhead,BUFSIZ,"%s/%s",dirStr,entry->d_name);
        stat(dirhead,&st);
        printf("%50s\t ",dirhead);
        if(S_ISDIR(st.st_mode)){
            printf("%s\n","is Dir");
        }else if(S_ISREG(st.st_mode)){
             printf("%s\n","is file");
        }else{
            printf("%s\n","Unknow type");
        }

    } ;
    closedir(dir);

    return 0;
}