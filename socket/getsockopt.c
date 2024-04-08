#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
/**
 * @function:		int     setsockopt(int fd, int level, int option_name, const void *pValue, socklen_t len);
 * 
 * @brief:	    getsockopt 函数用于获取 socket 某一个属性	
 * 
 * @param:  fd socketfd
 * @param   level   通常是 SOL_SOCKET                    socket_level_socket 应该是这个 
 * @param:  option_name   
 *                      SO_DEBUG 可记录调试信息
                        SO_REUSEADDR 启用本地地址重用
                        SO_REUSEPORT 启用重复的地址和端口绑定
                        SO_KEEPALIVE 启用保持连接状态
                        SO_DONTROUTE 启用传出信息的路由旁路功能
                        SO_LINGER 在有数据存在时等待关闭
                        SO_BROADCAST 启用发送广播报文的权限
                        SO_OOBINLINE 启用在带内接收带外数据
                        SO_SNDBUF 设置输出缓冲区大小
                        SO_RCVBUF 设置输入缓冲区大小
                        SO_SNDLOWAT 设置输出的最小计数
                        SO_RCVLOWAT 设置输入的最小计数
                        SO_SNDTIMEO 设置输出的超时值
                        SO_RCVTIMEO 为输入设置超时值
                        SO_TYPE 获取套接字类型（仅获取）
                        SO_ERROR 获取并清除套接字上的错误（仅获取）
                        SO_NOSIGPIPE 不产生 SIGPIPE，而是返回 EPIPE
                        SO_NREAD 要读取的字节数（仅获取）
                        SO_NWRITE 协议尚未发送的已写字节数（仅获取）
                        SO_LINGER_SEC 如果存在数据，则在关闭时逗留，超时时间以秒为单位
 * @param:   pValue  int 的指针地址 存储获取的值
 * @param:   len sizeof pValue    获取值的大小
 * 
 * @return:   				
 * 
 * @notice: 成功完成后，返回值为 0；否则返回值为-1，并设置全局变量 errno表示出错。
 * 
 * @errno :     除非出现以下情况，否则 getsockopt() 和 setsockopt() 系统调用将成功：

                [EBADF] 参数 socket 不是有效的文件描述符。

                [EFAULT] option_value 指向的地址不在进程地址空间的有效部分。 对于 getsockopt()，如果 option_value
                                    opt_len不在进程地址空间的有效部分时，也可能返回此错误。

                [EINVAL] 该选项在所示级别无效。

                [ENOBUFS] 系统资源不足，调用无法完成。

                [ENOMEM] 内存不足，无法完成系统调用。

                [ENOPROTOOPT]选项在指定级别未知。

                [ENOTSOCK]参数套接字不是套接字（如普通文件）。

                除非出现以下情况，否则系统调用 setsockopt() 将成功：

                [EDOM] 参数 option_value 越界。

                [EISCONN]套接字已连接，在这种情况下无法设置指定的选项。

                [EINVAL]套接字已关闭。
 * 
*/


int main() {
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) {
        perror("socket");
        exit(-1);
    }

    int optval;
    socklen_t optlen = sizeof(optval);

    if (getsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &optval, &optlen) < 0) {
        perror("getsockopt");
        exit(-1);
    }

    printf("SO_REUSEADDR is %s\n", optval ? "ON" : "OFF");

    return 0;
}