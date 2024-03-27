#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *   @func:         int	 getlogin_r(char * buff, size_t n);
 *        
 *   @brief      把登录名称存储在buff里面，限制的字符是 n 个
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return  
 * 
 *   @note     最初登录的用户名 在vscode里面是root 可能最初登录是root 然后切换到用户名了
 *             用终端 显示的是用户名称
 * 
*/
int main(){

    char Buff[BUFSIZ];

    memset(Buff,0,BUFSIZ);

    getlogin_r(Buff,BUFSIZ);

    printf("Current login =%s\n",Buff);

    return 0;
}