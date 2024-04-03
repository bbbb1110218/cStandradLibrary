#include <stdio.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * @function:		int flag=fcntl(socketFD,F_GETFL);    //获取文件属性
 *                  flag |= O_NONBLOCK;
 *                  fcntl(fd,F_SETFL,flag)               //设置文件属性
 * 
 * @brief:	 属性可以分别设置 : 
 *                      O_NONBLOCK
 *                                设置为非阻塞模式。在非阻塞模式下，如果 read 不会立即得到数据，
 *                                 或者 write 不会立即将数据写入，这些函数会立即返回一个错误。
 *                      O_ASYNC：允许异步 I/O。在这种模式下，当 I/O 变得可用时，操作系统会发送一个 SIGIO 信号。
 *                      O_APPEND：在每次写入时都追加到文件的末尾。
 *                      O_DIRECT：尝试最小化或避免缓存的影响。
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:   				
 * 
 * @notice:
 * 
*/

int main() {

    int fd = socket(AF_INET,SOCK_STREAM,0);
    if(-1 ==fd ){
        perror("socket");
        return -1;
        // exit(250);
    }

    
//获取文件属性
    int flag= fcntl(fd,F_GETFL);
    printf("set Before = 0X%02X\n",flag);
     
//安位或一下不阻塞
    flag |= O_NONBLOCK;

//设置
    if(-1==fcntl(fd,F_SETFL,flag)){
        perror("fcntl");
        fprintf(stderr,"设置socket属性失败");
    };
    printf("set Before = 0X%02X\n",flag);


    close(fd);
    return 0;
}
