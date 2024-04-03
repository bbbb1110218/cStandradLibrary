#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
 #include <unistd.h>

/**
 * @function:   int     accept(int fd, struct sockaddr * __restrict, socklen_t * __restrict)
 * 
 * @brief:      
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
        while((readSize = read(client_fd,Buff,BUFSIZ-1)) > 0)

        


        // 这里可以处理客户端的连接请求，例如通过 read 和 write 函数与客户端通信
        // ...
    }

    return 0;
}