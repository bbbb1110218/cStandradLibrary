#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include<arpa/inet.h>
#include <stdlib.h>

/**
 * @function:		int listen(int fd,int backlog);
 * 
 * @brief:      listen 函数用于将一个未连接的套接字转换为一个被动套接字，指示内核应接受指向该套接字的连接请求。这是创建一个服务器并接受客户端连接的必要步骤。   
 * 
 * @param:      sockfd：要监听的套接字的文件描述符，这个套接字应该已经被 socket 创建并且已经被 bind 绑定到一个地址。
 * @param:      backlog：未完成连接队列的最大长度。这个参数指定了内核应该为等待接受的连接请求队列的大小。
 * @param:
 * 
 * @return:   	0 if successfu else -1			
 * 
 * @notice: 如果等待接受的连接请求队列已满（即超过了 listen 函数的 backlog 参数指定的大小），那么新的连接请求可能会被内核忽略或拒绝，具体行为取决于操作系统的实现。
 * 
 * @notice:     创建基于套接字的连接需要进行多项操作。  首先，使用 socket(2) 创建一个套接字。  然后，接受传入连接的意愿和一个
                listen() 调用只适用于类型 SOCK_STREAM。

                backlog参数定义了待处理连接队列的最大长度。  如果连接请求到达时队列已满，客户端可能会收到一个
                错误，并显示 ECONNREFUSED。  或者，如果底层协议支持重传，则可以忽略该请求，以便重试成功。
 * 
*/

int main() {

    int fd= socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr *add;
    struct sockaddr_in addr;
    memset(&addr,0,sizeof(addr));
    add = (struct sockaddr *)&addr;


    addr.sin_len=0xff;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    // 绑定所有机地址
    addr.sin_addr.s_addr = htonl(INADDR_ANY);


   //指示 内核/操作系统 应接受指向该套接字的连接请求,  最大的连接队列为5个
    if(-1 ==     listen(fd,5) ){
        perror("listen");
        exit(-1);
    }

    

    return 0;
}
