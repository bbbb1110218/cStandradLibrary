#include<sys/types.h>
#include <sys/socket.h>
 #include <arpa/inet.h>
 #include <unistd.h>
 #include <stdio.h>

/**
 * @function:		int socket(int domain, int type, int protocol);
 * 
 * @brief:			C语言中用于创建一个新的套接字（也就是网络连接）
 *  
 * @param:domain：这个参数指定了套接字使用的协议族（protocol family）。
 *                              常见的值有  AF_INET（IPv4网络协议）、
 *                                        AF_INET6（IPv6网络协议）和 
 *                                        AF_UNIX（本地通信）
 * 
 * @param:type：    这个参数指定了套接字的类型。
 *                          常见的值有 SOCK_STREAM（提供面向连接的稳定数据传输，即TCP协议）、
 *                                    SOCK_DGRAM（提供无连接的数据传输，即UDP协议）。
 * 
 * @param:protocol：这个参数通常设置为0，让操作系统自动选择合适的协议，
 *                              对于 AF_INET 和 AF_INET6，分别对应 IPPROTO_TCP 和 IPPROTO_UDP。
 * 
 * @return:  返回-1时候，是创建socket 失败 需要处理错误，而不是继续使用无效套接字
 *            			
 * 
 * @notice:  
 *      1.  socket 默认的是阻塞的.这意味着在进行网络操作（如 read、write、accept 等）时，
 *                 如果数据不可用，你的程序会阻塞，直到数据变得可用。如果你希望套接字是非阻塞的，
 *                  你需要使用 fcntl 函数来改变它的属性
 *      2. 当你不再需要套接字时，你应该使用 close 函数来关闭它。
 *         否则，如果你的程序打开太多的套接字而没有关闭，可能会耗尽系统资源，
 *         导致新的 socket 调用失败。
 * 
*/

int main() {
//Create ipv4 tcp socket
    int TCPSOCK=socket(AF_INET,SOCK_STREAM,0);
//Create ipv4 udp socket
    int UDPSOCK=socket(AF_INET,SOCK_DGRAM,0);
//Create ipv6 tcp socket
    int TCP6SOCK=socket(AF_INET6,SOCK_STREAM,0);
//Create ipv6 udp socket    
    int UDP6SOCK=socket(AF_INET6,SOCK_DGRAM,0);

    int ROWSOCK = socket(AF_LINK, SOCK_RAW,0);

    printf("tcpSOCKT =%d\n",TCPSOCK);

    close(TCPSOCK);
    close(UDPSOCK);
    close(TCP6SOCK);
    close(UDP6SOCK);
    close(ROWSOCK);
    

    return 0;
}
