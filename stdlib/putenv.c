#include <stdio.h>
#include <stdlib.h>


/**
 *   @func:  putenv(环境变量)
 *        
 *   @brief  推送环境变量 环境变量需要包含 ’=‘ 字符
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return  0 表示成功，返回 -1 表示失败
 * 
 *   @note 
*/
int main(){

    char buff[]="Hello=kitty";
    if(putenv(buff) == 0 ){
        printf("putenv success\n");
    }else{
        printf("putenv failed\n");
    }

    printf("getenv(\"Hello\") = %s\n",getenv("Hello"));

    return 0;
}