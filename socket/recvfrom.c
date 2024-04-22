#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>


/**

 * @function:	         ssize_t  recvfrom(int socket, 
                                            void *restrict buffer, 
                                            size_t length, 
                                            int flags, 
                                            struct sockaddr *restrict address,
                                            socklen_t *restrict address_len);
 * 
 * @brief:      udp接收数据数据 有可能有错误
 * 
 * 
 * @param: socket  socket_fd
 * @param: buffer   
 * @param: length 缓存大小
 * @param: flags       
 *                      MSG_OOB 处理带外数据
                        MSG_PEEK 偷看收到的信息
                        MSG_WAITALL 等待完整请求或错误
 * 
 * @return:     返回成功接收到的字节数量，		
 * 
 * @notice:     recvfrom() 和 recvmsg() 系统调用用于从套接字接收信息，也可用于接收套接字上的数据，无论套接字是否面向连接。
                数据。

                如果地址不是空指针，且套接字不是面向连接的，则会填写报文的源地址。
                会被填入。  address_len 参数是一个值-结果参数，初始化为与 address 关联的缓冲区大小，并在返回地址时修改。
                的缓冲区大小，并在返回时修改为地址的实际大小。

                recv() 函数通常只在已连接的套接字上使用（参见 connect(2) 或 connectx(2)），它与 recvfrom() 函数相同，但有两个不同的参数
                与 recvfrom()函数相同，但其地址参数为空指针。  由于该函数是多余的，未来版本可能不再支持它。
                版本中可能不再支持。

                MSG_OOB 标志请求接收正常数据流中接收不到的带外数据。  某些协议
                协议会将加急数据放在正常数据队列的首部，因此该标记不能与此类协议一起使用。
                协议。  MSG_PEEK 标志使接收操作从接收队列的起始位置返回数据，而不从队列中删除该数据。
                而不从队列中删除数据。  因此，后续接收调用将返回相同的数据。  接收
                标志要求阻塞操作，直到满足全部请求。  但是，如果出现
                如果信号被捕获、发生错误或断开连接，或者下一个要接收的数据与请求的类型不同，则调用返回的数据仍可能少于请求的数据。
                返回的数据类型不同
 * 
*/

char *msg="Hello kitty,from function recvfrom";

int main(int argc,char *argv[]) {

    if(argc !=3){
        fprintf(stderr,"Usage: %s <ip> <port>\n",argv[0]);
        return -1;
    }

    int ufd=socket(AF_INET,SOCK_DGRAM,0);
    if(ufd <0){
        perror("socket");
        return -2;
    }

    struct sockaddr_in SA4;
    bzero(&SA4,sizeof(SA4));

    SA4.sin_family=AF_INET;
    SA4.sin_port=htons(atoi(argv[2]));
    if(inet_pton(AF_INET,argv[1],&SA4.sin_addr.s_addr) ==-1){
        perror("inet_pton");
        exit(3);
    }



    if(-1 == sendto(ufd,msg,strlen(msg),0,(struct sockaddr *)&SA4,sizeof(SA4)) ){
        perror("sendto");
        exit(6);
    }else{
        printf("sent msg : %s to ip: %s[:%s] scuessed\n",msg,argv[1],argv[2]);
    };


    socklen_t SaLen= sizeof(SA4);
    char BUFF[BUFSIZ];
    memset(BUFF,0,BUFSIZ);
    ssize_t n=recvfrom(ufd,BUFF,BUFSIZ-1,0,(struct sockaddr *)&SA4,&SaLen);
    if(n)
        BUFF[n]=0;
    printf("Got message from server:%s\n",BUFF);
    
    close(ufd);
    return 0;
}
