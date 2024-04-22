#include <stdio.h>
#include <sys/socket.h>

/**
 * @function:  int setsockopt(int socket, int level, int option_name, const void *option_value, socklen_t option_len);
 * 
 * @brief:	    setsockopt 设置socket选项	
 * 
 * @param:  socket 要设置的socketfd
 * @param:  level   通常是 SOL_SOCKET  
 *                  socket_level_socket 应该是这个
 * @param:  option_name   
 *              SO_REUSEPORT        设置地址和端口都允许重复使用   允许多个套接字绑定到同一个端口号。这对于某些类型的并发服务器来说非常有用，因为它允许多个进程或线程监听同一个端口，从而提高并发处理能力。
 *              SO_REUSEADDR        允许重新使用本地地址       allow local address reuse
 *              SO_DEBUG            打开debug纪录         turn on debugging info recording
 *              SO_ACCEPTCONN       判断是否在监听              socket has had listen() 
 *              SO_KEEPALIVE        是否alive            keep connections alive
 *              SO_DONTROUTE        操作系统会尝试直接将数据包发送到目标主机，而不通过路由表。这通常用于实现一些底层的网络协议或诊断工具。
 *              SO_RCVBUF           设置接收缓冲区的大小   
 *              SO_SNDBUF           发送缓冲区的大小
 *              SO_RCVTIMEO         设置接收超时时间    
 *              SO_SNDTIMEO         设置发送超时时间
 *              SO_BROADCAST        是一个 socket 选项，它允许 socket 发送广播消息。广播消息是发送到网络上所有主机的消息，而不是发送到特定主机。
 *              SO_LINGER：         设置 socket 关闭的行为。
 *              IP_MULTICAST_IF     用于设置 IP 多播的选项。
 *              IP_ADD_MEMBERSHIP   用于设置 IP 多播的选项。
 *              IP_DROP_MEMBERSHIP  用于设置 IP 多播的选项。
 *              SO_DONTROUTE        操作系统会尝试直接将数据包发送到目标主机，而不通过路由表。这通常用于实现一些底层的网络协议或诊断工具。
 *              SO_TIMESTAMP        时间戳接收到dgram流量       timestamp received dgram traffic  收到 Dgram 流量的时间戳
 *              SO_DONTTRUNC        
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
    int opt = 1;
    setsockopt(fd,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(int));

    return 0;
}
