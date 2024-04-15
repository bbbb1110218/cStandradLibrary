#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>


/**
 * @function:		int		getaddrinfo(const char * hostname,
 *                                      const char * __restrict,
			                            const struct addrinfo * __restrict,
			                            struct addrinfo ** __restrict); 
 * 
 * @brief:			getaddrinfo函数用于获取指定主机名和服务名的地址信息。
 *                  它返回一个addrinfo结构体链表，每个结构体都包含一个可以用于创建套接字的地址。
 * 
 * @param:      hostname 请求的url
 * @param:
 * @param:
 * 
 * @return:   				
 * 
 * @notice:
 * 
*/

int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <query> ",argv[0]);
        exit(-1);
    }


        struct addrinfo hints, *res;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC; // 未指定 use AF_INET6 to force IPv6 
    hints.ai_socktype = SOCK_STREAM;

    int status = getaddrinfo(argv[1], NULL, &hints, &res);
    if (status != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(status));
        return 2;
    }

    char ipstr[INET6_ADDRSTRLEN];
    for(struct addrinfo *p = res; p != NULL; p = p->ai_next) {
        void *addr;
        if (p->ai_family == AF_INET) {
            struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ai_addr;
            addr = &(ipv4->sin_addr);
        } else {
            struct sockaddr_in6 *ipv6 = (struct sockaddr_in6 *)p->ai_addr;
            addr = &(ipv6->sin6_addr);
        }

        inet_ntop(p->ai_family, addr, ipstr, sizeof(ipstr));
        printf("%s\n", ipstr);
    }

    freeaddrinfo(res);

    return 0;
}
