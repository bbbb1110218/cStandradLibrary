#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>


/**
 *   @func:
 * 

 *        
 *        
 *   @brief
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/

//  struct dirent {
// 	ino_t d_ino;                    /* file number of entry */
// 	__uint16_t d_reclen;            /* length of this record */
// 	__uint8_t  d_type;              /* file type, see below */
// 	__uint8_t  d_namlen;            /* length of string in d_name */
// 	char d_name[__DARWIN_MAXNAMLEN + 1];    /* name must be no longer than this */
// };

void search_files(const char *dirpath,const char*filename){
        DIR *dir = opendir(dirpath);
    if (dir == NULL) {
        perror("opendir");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        // 忽略 '.' 和 '..' 条目
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // 构造完整的路径
        char path[1024];
        snprintf(path, sizeof(path), "%s/%s", dirpath, entry->d_name);

        struct stat sb;
        if (stat(path, &sb) == -1) {
            perror("stat");
            continue;
        }
        if (!strncmp(entry->d_name,filename,strlen(filename))) 
        {
            puts(path);
        } else if (S_ISDIR(sb.st_mode)) 
        {

            search_files(path,filename);
        }

    }

    closedir(dir);
}
void list_files(const char *dirpath) {
    DIR *dir = opendir(dirpath);
    if (dir == NULL) {
        perror("opendir");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        // 忽略 '.' 和 '..' 条目
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // 构造完整的路径
        char path[1024];
        snprintf(path, sizeof(path), "%s/%s", dirpath, entry->d_name);

        struct stat sb;
        if (stat(path, &sb) == -1) {
            perror("stat");
            continue;
        }

        if (S_ISDIR(sb.st_mode)) {
            printf("%s is a directory\n", path);

            // 递归地列出子目录中的文件
            list_files(path);
        } else if (S_ISREG(sb.st_mode)) {
            printf("%s is a file\n", path);
        } else {
            printf("%s is something else\n", path);
        }
    }

    closedir(dir);
}

int main(int argc,char *argv[]){

    const char *dir="/Users/min122218/";
    // list_files(dir);
    search_files(dir,argv[1]);


#if 0
    // char dirStr[BUFSIZ];

    // realpath("/Users/min122218/Documents/GitHub/cStandLib",dirStr);
    const char *dirStr="/Users/min122218/Documents/GitHub/cStandLib";
    DIR *dir=opendir(dirStr);
    if(dir ==NULL)
    {
        perror("opendir");
        exit(-1);
    }
    struct dirent *entry;
    
    char buff[1024];
    memset(buff,0,1024);

    struct stat sb;
    

    while((entry=readdir(dir)) !=NULL){
        if (stat(entry->d_name, &sb) == -1) {
                perror("stat");
                return 1;
            }
        


        printf("%20s\t%20lu\t",entry->d_name,(unsigned long)entry->d_ino);

        if(S_ISDIR(sb.st_mode))printf("DIR\n");
        else if(S_ISREG(sb.st_mode))printf("file\n");
        else  printf("\t\n");

    }
#endif 



    return 0;
}