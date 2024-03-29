#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 *   @func:     int dupFd=fcntl(outfd,F_DUPFD,MINIMUM_VALUE);
 *        
 *   @brief  复制文件描述符，并且制定文件描述符的最小值
 *    
 *   @param outfd           老文件描述符 
 *   @param  MINIMUM_VALUE   指定文件描述符的最小值
 *   @param  F_DUPFD            按如下方式返回一个新的描述符：

                                - 编号最小的可用描述符
                                    大于或等于 arg。
                                - 与原始描述符相同的对象引用。
                                    描述符相同的对象引用。
                                - 新描述符共享相同的文件偏移量
                                    如果对象是文件，新描述符共享相同的文件偏移量。
                                - 相同的访问模式（读、写或
                                    读/写）。
                                - 相同的文件状态标志（即两个文件
                                    描述符共享相同的文件状态
                                    标志）。
                                - 与新文件描述符相关的执行时关闭标志会被清除。
                                    新文件描述符相关的 close-on-exec 标志会被清除，这样该
                                    描述符在执行 execv(2)
                                    系统调用时仍保持打开状态。

 
 * 
 *   @return 
 * 
 *   @note 
*/


int main(){
    int outfd=fileno(stdout);
    #define MINIMUM_VALUE 20
    int dupFd=fcntl(outfd,F_DUPFD,MINIMUM_VALUE);
    printf(" = %d\n",dupFd);
    if(dupFd < 0 ){
        perror("fcntl");
        exit(-1);
    }
    
    const char * buff="hello,kitty";
    write(dupFd,buff,strlen(buff));
    close(dupFd);


    return 0;
}