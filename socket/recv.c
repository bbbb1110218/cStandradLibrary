#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <arpa/inet.h>

/**
 * @function:		     ssize_t recv(int socket, void *buffer, size_t length, int flags);
 * 
 * @brief:	             专门处理socket的函数 
 * 
 * @param:      socket 需要接受的socket
 * @param:      buffer 需要存入的缓存
 * @param:      length 缓存大小
 * @param:          MSG_PEEK：查看即将接收的数据，但不从系统缓冲区删除。
                    MSG_OOB：接收外带数据（out-of-band data）。
                    MSG_WAITALL：阻塞操作直到请求的数据量完全接收。
                    MSG_DONTWAIT：使 recv 操作非阻塞
 * 
 * @return:   				
 * 
 * @notice: MSG_PEEK 当读取socket得时候，读取N个  会被操作系统删除缓冲区的N个
*/

// time.google.com  专门获取时间

int main(int argc,char *argv[]) {
    if(argc !=3)
    {
        fprintf(stderr,"Usage:%s <host> <port>",argv[0]);
        exit(1);
    }
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) {
        perror("socket");
        exit(-1);
    }

    struct sockaddr_in SA;
    SA.sin_family =AF_INET;
    SA.sin_port =htons((unsigned short)atoi(argv[2]));
    //Note:inet_pton 转换成功 返回值为1  和其他function不一样 记住啦
    if(inet_pton(AF_INET,argv[1],&SA.sin_addr.s_addr) !=1){
        perror("inet_pton");
        exit(1);
    }

    if(connect(fd,(struct sockaddr *)&SA,sizeof(SA)) !=0){
        perror("connect");
        exit(-1);
    }




    char buffer[1024];
    ssize_t n = recv(fd, buffer, sizeof(buffer) - 1, MSG_PEEK);
    if (n < 0) {
        perror("recv");
        exit(-1);
    }

    // 添加 null 终止符
    buffer[n] = '\0';

    printf("Received: %s\n", buffer);

    #if 1
        char buffer2[1024];
    ssize_t n2 = recv(fd, buffer2, sizeof(buffer2) - 1, 0);
    if (n < 0) {
        perror("recv");
        exit(-1);
    }else{
        buffer2[n2]=0;
        printf("Received: %s\n", buffer2);
    }

    #endif 

    return 0;
}