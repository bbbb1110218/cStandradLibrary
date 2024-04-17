#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * @function:		int connect(int socket_fd, const struct sockaddr *address, socklen_t address_len);
 * 
 * @brief:	 connect 函数用于连接到服务器,应该新建一个socket，去连接服务器
 *          connect 函数用于建立一个到指定网络地址的连接。虽然它最常见的用途是在 TCP 协议中建立连接，但它也可以用于其他类型的 sockets，包括 UDP。
 *          对于 TCP，connect 函数会发起一个三次握手来建立连接。如果连接成功建立，connect 函数会返回 0。如果连接建立失败，connect 函数会返回 -1，
 *          并设置 errno 来表示错误。
 *          
 *          对于 UDP，connect 函数并不会实际发起一个网络连接，因为 UDP 是一个无连接的协议。然而，当你对一个 UDP socket 调用 connect 函数时，
 *          你实际上是在设置这个 socket 的默认远程地址。这意味着，你之后可以使用 send 和 recv 函数（而不是 sendto 和 recvfrom）来发送和接收数据。
 *          如果你对一个 UDP socket 调用 connect 函数，它总是会立即返回，而不会阻塞。		
 * 
 * @param:  socket_fd 新建的socket
 * @param:  address  服务器地址的结构 struct sockaddr_in 表示ipv4地址 
 *                                  struct sockaddr_in6 表示ipv6地址
 *                                  都需要转换成 struct sockaddr 通用地址结构
 * @param: address_len  结构体的长度
 * 
 * @return: 成功完成后，返回0的值。否则，返回-1的值，并将全局整数变量ERRNO设置为指示错误。  				
 * 
 * @notice:
 *      在使用 connect 函数时，有几点需要注意：
 *          
 *      1.地址和端口的格式：connect 函数的第二个参数是一个 sockaddr 结构的指针，但通常我们会使用 sockaddr_in 或 sockaddr_in6 结构
 *      来表示 IP 地址和端口，然后将它们转换为 sockaddr。需要注意的是，IP 地址和端口都应该使用网络字节序，你可以使用 inet_pton 函数
 *      和 htons 函数来进行转换。
 *  
 *      2.错误处理：connect 函数在失败时返回 -1，并设置 errno 来表示错误。你应该总是检查 connect 函数的返回值，并适当地处理错误。
 *      
 *      3.阻塞行为：默认情况下，connect 函数会阻塞，直到连接建立成功或失败。如果你不希望 connect 阻塞，你可以将 socket 设置为非阻塞模式。
 * 
 *      4.UDP 的特殊行为：对于 UDP socket，connect 函数并不会实际发起一个网络连接，而是设置 socket 的默认远程地址。这意味着，你可以使用 
 *      send 和 recv 函数来发送和接收数据，而不需要指定远程地址。
 * 
 *      5.资源管理：一旦连接建立成功，你应该在完成通信后使用 close 函数关闭 socket。如果你忘记关闭 socket，可能会导致资源泄漏。
 * 
*/

#if 1
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
        if(connect(fd,(struct sockaddr*)&Server,sizeof(Server)) == 0)
            printf("Open port: %hu\n",n);

        close(fd);
    }

    return 0;
}

#else 
// memset 函数应该在设置 Server.sin_family 和 Server.sin_addr.s_addr 之前调用，以确保 struct sockaddr_in Server 的所有字段都被正确地初始化为 0。

// 在 for 循环中，你在每次迭代时都使用同一个 socket (fd) 去连接不同的端口。一旦 connect 调用成功，这个 socket 就会与特定的端口关联，不能再用于其他的 connect 调用。你应该在每次迭代时都创建一个新的 socket。

// 你没有检查 connect 函数的返回值。connect 函数在失败时返回 -1，而在成功时返回 0。你应该检查 connect 函数的返回值，以确定连接是否成功。

// 你没有处理可能的网络错误。在网络编程中，总是有可能发生各种错误，例如网络中断、对端关闭连接等。你应该检查所有网络函数的返回值，并适当地处理错误。

int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <Ip>",argv[0]);
        exit(EXIT_FAILURE);
    }
    int fd=socket(AF_INET,SOCK_STREAM,0);
    if(fd < 0 ){
        perror("socket");
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in Server;
     memset(&Server,0,sizeof(struct sockaddr_in));
    Server.sin_family=AF_INET;
   
    if(-1 == inet_pton(AF_INET, argv[1], &Server.sin_addr.s_addr)){
        fprintf(stderr,"inet_pton Error\n");
        exit(EXIT_FAILURE+1);
    };
    int result;

    for(unsigned short n=0;n<USHRT_MAX;n++){
        Server.sin_port=htons(n);
        result = connect(fd,(struct sockaddr*)&Server,sizeof(Server));
        if(!result )
             printf("Open port: %hu\n",n);
        
        
    }
    close(fd);

    


    return 0;
}
#endif