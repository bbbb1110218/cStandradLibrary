#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * @function:    int   getpeername(int socket, struct sockaddr *restrict address, socklen_t *restrict address_len);
 * 
 * @brief:  获取链接的socketfd 的信息,存入address中 需要指定address_len的长度
 * 
 * @param:  socket 链接的socketfd 已经链接的socketfd
 * @param:  address 存放获取的信息 struct sockaddr_in for ipv4 struct sockaddr_in6 for ipv6
 * 
 * @param:  address_len address的长度指针 ，需要提前设置为address的长度 并且参数为该长度的指针
 * 
 * @return:    0 if scuccess, -1 if fail and set errno
 * 
 * @notice:   
 * 
*/

//全局的获取的信息 用于获取链接的socketfd 的信息
struct sockaddr_in GSA;

//全局的获取的信息的长度
socklen_t G_LEN =sizeof(GSA);


int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <Ip>",argv[0]);
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in Server;
    memset(&Server,0,sizeof(struct sockaddr_in));
    Server.sin_family=AF_INET;

    if(-1 == inet_pton(AF_INET, argv[1], &Server.sin_addr.s_addr)){
        fprintf(stderr,"inet_pton Error\n");
        exit(EXIT_FAILURE+1);
    };

    for(unsigned short n=0;n<USHRT_MAX;n++){
        int fd=socket(AF_INET,SOCK_STREAM,0);
        //  printf("Open port: %d\n",fd);
        
        if(fd < 0 ){
            perror("socket");
            exit(EXIT_FAILURE);
        }

        Server.sin_port=htons(n);
        if(connect(fd,(struct sockaddr*)&Server,sizeof(Server)) == 0){
            //获取链接的socketfd 的信息
            if( getpeername(fd,(struct sockaddr*)&GSA,&G_LEN) ==0){
                break; 
            };
        }
            // printf("Open port: %hu\n",n);

        close(fd);
    }
    char BUFF[BUFSIZ];
    memset(BUFF,0,BUFSIZ);
    inet_ntop(AF_INET,&GSA.sin_addr.s_addr,BUFF,BUFSIZ);
    printf("Connect Ip: %s\n",BUFF);
    printf("Open port: %hu\n",ntohs(GSA.sin_port));

    return 0;
}

