#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
 #include <unistd.h>
 #include <errno.h>

/**
 * @function:   int     accept(int fd, struct sockaddr * __restrict, socklen_t * __restrict)
 * 
 * @brief:      accept 阻塞当前进程，知道有新客户端连接到服务器
 *  
 * 
 * @param:  fd  监听的socket
 * @param:  struct sockaddr *  客户端地址结构体指针 需要用struct sockeaddr_in ipv4地址结构体指针
 * @param:  socklen_t *  结构体（struct sockaddr_in）的长度
 * 
 * @return:      返回一个新的文件描述符，用于与客户端通信     				
 * 
 * @notice:   默认会阻塞当前进程，直到有新的客户端连接到服务器
 *          如果设置为非阻塞
 *              int flags = fcntl(fd, F_GETFL, 0);
 *              fcntl(fd, F_SETFL, flags | O_NONBLOCK);
 *          非阻塞模式下，没有新的客户端连接到服务器时，返回-1
 * 
*/
int main() {
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));

    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("bind");
        exit(-1);
    }

    if (listen(fd, 5) < 0) {
        perror("listen");
        exit(-1);
    }

    while (1) {
        struct sockaddr_in client_addr;
        socklen_t client_len = sizeof(client_addr);
        int client_fd = accept(fd, (struct sockaddr *)&client_addr, &client_len);
        if (client_fd < 0) {

            perror("accept");
            exit(-1);
        }

        char Buff[BUFSIZ];
        memset(Buff,0,BUFSIZ);

        size_t readSize=0;
        while((readSize = read(client_fd,Buff,BUFSIZ-1)) > 0);

        


        // 这里可以处理客户端的连接请求，例如通过 read 和 write 函数与客户端通信
        // ...
    }

    return 0;
}