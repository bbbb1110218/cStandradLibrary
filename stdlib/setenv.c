#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:     int	 setenv(const char * __name, const char * __value, int __overwrite)
 *        
 *   @brief
 *      
 *   @param name 环境变量名
 *   @param value 环境变量值
 * 
 *   @param     overwrite 若环境变量已存在，且 overwrite 为 0，则不改变环境变量的值；
 *              若 overwrite 为非 0，则改变环境变量的值。
 * 
 *   @return    若成功则返回 0，失败则返回 -1。
 * 
 *   @note 
*/
int main(){

    char *name = "IDF_PATH";
    char *value = "unknow";
    
    if(setenv(name,value,1) == -1){
        perror("setenv");
        exit(EXIT_FAILURE);
    }else{
        printf("setenv success\n");
        printf("IDF_PATH = %s\n",getenv(name));
    }

    return 0;
}