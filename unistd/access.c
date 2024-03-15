#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


/**
 *   @func:         int access(const char *pathname, int mode);
 *        
 *   @brief:        检查路径是否存在
 *                  如果调用进程有指定的权限，或者文件存在（如果使用了 F_OK），access 返回 0。如果调用进程没有指定的权限，或者文件不存在，access 返回 -1 并设置 errno。
 *      
 *   @param mode    需要检查的权限  F_OK 文件是否存在
 *                                X_OK 是否有执行的权限
 *                                W_OK 是否有写的权限
 *                                R_OK 是否有读的权限

 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main(){

    const char *file1="/file/not/exist";



    int num;

    if((num =access(file1,F_OK)) != -1){
        printf("文件:%s 存在" "\n",file1);
    }else{
        printf("文件:%s 不存在" "\n",file1);
    }

    char Buff[BUFSIZ];

    char *cwd=getwd(Buff);

    strcat(Buff,"/exit.c");


    if((num=access(Buff,X_OK)) != -1){
        printf("文件:%s 可以执行" "\n",Buff);
    }else{
        printf("文件:%s 不可以执行" "\n",Buff);
    }

    if((num=access(Buff,R_OK)) != -1){
        printf("文件:%s 可读" "\n",Buff);
    }else{
        printf("文件:%s 不可读" "\n",Buff);
    }


    if((num=access(Buff,W_OK)) != -1){
        printf("文件:%s 可写" "\n",Buff);
    }else{
        printf("文件:%s 不可以写" "\n",Buff);
    }

        if((num =access(Buff,F_OK)) != -1){
        printf("文件:%s 存在" "\n",Buff);
    }else{
        printf("文件:%s 不存在" "\n",Buff);
    }

    

    

    return 0;
}