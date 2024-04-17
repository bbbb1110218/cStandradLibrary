#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>

/**
 * @function:		struct hostent	*gethostbyaddr(const void *SA, socklen_t len, int protocal);
 * 
 *                  SA里面放IP地址就行
 * 
 * @brief:		gethostbyaddr函数用于根据网络地址获取主机名。它返回一个hostent结构体，该结构体包含了主机的信息，如主机名、别名、地址类型、地址长度和地址列表。	
 * 
 * @param:      SA  struct sockaddr_in 指针 for ipv4 ，struct sockaddr_in6 for ipv6
 * @param:      len  sizeof SA
 * @param:      protocal 协议 AF_INET if ipv4 ，AF_INET6 for ipv6
 * 
 * @return:  struct hostent	*
 * 
 *          如果没有查询成功 会返回NULL 
 *           struct hostent {
             char *h_name;              * 主机正式名称 *
             char **h_aliases;          * 别名列表 *
             int h_addrtype;            * 主机地址类型 *
             int h_length;              * 地址长度 *
             char **h_addr_list;        * 来自名称服务器的地址列表 *
     };	
 * 
 * @notice: 通过IP反向DNS 获取URL 需要在域名记录添加PTR记录
 *        
 * @output: 
 *     ./a.out 8.8.8.8  
 *              查询成功
                ip =8.8.8.8
                url=dns.google
      ./a.out 8.8.8.9
        查询失败或者域名没有PTR记录


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
        fprintf(stderr,"查询失败或者域名没有PTR记录");
        // perror("gethostbyaddr");
        // return -2;
    }else{
        fprintf(stdout,"查询成功\n");
        printf("ip =%s\nurl=%s\n",argv[1],hc->h_name);
    }





    return 0;
}
