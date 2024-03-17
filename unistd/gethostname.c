#include <stdio.h>
#include <unistd.h>
#include <stdlib/stdlib.c>
#include <string.h>

/**
 *   @func:              int  gethostname(char *name, size_t namelen);   获取主机名称
 *                      
 *                       int  sethostname(char *name, size_t namelen);   设置主机名称
 *        
 *   @brief
 *      
 *   @param
 *   @param    name   
 *   @param    namelen
 * 
 *   @return 
 * 
 *   @note              需要root权限
 * 
 *   @note          hostname 有什么用
 * 
 *                  gethostname 函数用于获取当前系统的主机名。主机名在许多情况下都很有用，例如：
 *                  网络通信：在网络中，主机名通常用于标识特定的设备。例如，你可能需要知道你的代码正在哪台机器上运行，以便正确地配置网络连接。
                    日志记录：当你在多台机器上运行相同的代码时，将主机名记录在日志中可以帮助你追踪问题发生在哪台机器上。
                    多机器协作：在一些分布式系统中，主机名可以用于识别和协调不同的节点。
                    用户界面：在一些应用中，显示主机名可以让用户知道他们当前正在使用哪台机器。
                    请注意，gethostname 函数获取的是系统配置的主机名，这可能与 DNS 系统中的主机名不同。
*/
int main(){

    char buff[BUFSIZ];

    if(!gethostname(buff,BUFSIZ)){
        printf("hostname: %s\n",buff);
    }else{
        perror("gethostname");
        exit(1);
    }
    char *t=buff;
    
    while((t < buff+20) && (*t != '.') ){
        t++;
    }
    
    if(*t == '.')
        *t ='\0';

    // sethostname(buff,strlen(buff));

    

    const  char *hostname="MacMiniM2";


    strncpy(buff,hostname,strlen(hostname));

    if( ! sethostname(buff,strlen(buff)) )
    {
        printf("hostname set to %s\n",buff);
    }else{
        printf("hostname set Error");
        exit(EXIT_FAILURE);
    }

    if(!gethostname(buff,BUFSIZ)){
        printf("hostname: %s\n",buff);
    }else{
        perror("gethostname");
        exit(1);
    }



    return 0;
}