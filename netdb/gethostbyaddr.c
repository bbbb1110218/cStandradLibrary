#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>

/**
 * @function:		struct hostent	*gethostbyaddr(const void *SA, socklen_t len, int protocal);
 * 
 * @brief:		gethostbyaddr函数用于根据网络地址获取主机名。它返回一个hostent结构体，该结构体包含了主机的信息，如主机名、别名、地址类型、地址长度和地址列表。	
 * 
 * @param:      SA  struct sockaddr_in 指针 for ipv4 ，struct sockaddr_in6 for ipv6
 * @param:      len  sizeof SA
 * @param:      protocal 协议 AF_INET if ipv4 ，AF_INET6 for ipv6
 * 
 * @return:    struct hostent	*
 *           struct hostent {
             char *h_name;              * 主机正式名称 *
             char **h_aliases;          * 别名列表 *
             int h_addrtype;            * 主机地址类型 *
             int h_length;              * 地址长度 *
             char **h_addr_list;        * 来自名称服务器的地址列表 *
     };	
 * 
 * @notice:
 * 
*/

int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <ip>",argv[0]);
        exit(-1);
    }
    struct sockaddr_in ip4;
    if(inet_pton(AF_INET,argv[1],&ip4) == -1){
        perror("inet_pton");
        return -1;
    }


    struct hostent *hc=gethostbyaddr(&ip4,sizeof(ip4),AF_INET);

    if(hc == NULL){
        perror("gethostbyaddr");
        return -2;
    }

    printf("ip =%s\nurl=%s\n",argv[1],hc->h_name);




    return 0;
}
