#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>


/**
 * @function:   int bind(int fd, const struct sockaddr *pointer, socklen_t)
 *               
 * @brief:			
 * 
 * @param:  fd  socket()函数返回的文件描述符    
 * @param:  struct sockaddr * 结构的指针    
 *          struct sockaddr_in  ipv4地址结构体需要强制转换为 struct sockaddr * 通用地址结构体指针
 *          struct sockaddr_in6 ipv6地址结构体需要强制转换为 struct sockaddr * 通用地址结构体指针
 * @param:  socklen_t  结构体的长度
 *          sizeof(struct sockaddr_in)  ipv4地址结构体的长度
 *          sizeof(struct sockaddr_in6) ipv6地址结构体的长度
 *
 * 
 * @return:   	 0 for success, -1 for error			
 * 
 * @notice:  需要ipv4 用struct sockaddr_in  ipv4    
 *           需要ipv6 用struct sockaddr_in6 ipv6
 *           都需要转换为 struct sockaddr 通用地址结构体指针q
 *           并且参数3 需要传入结构体的长度
 * 
*/

/**
 * 
 * 
 *  
 * 通用地址结构体
 struct sockaddr {
 __uint8_t sa_len;       // 8位地址长度
 sa_family_t sa_family;  // 16位地址族
 char sa_data[14];       // 14位地址数据
};
*  
* IPv4地址结构体
struct sockaddr_in {
	__uint8_t       sin_len;
	sa_family_t     sin_family;
	in_port_t       sin_port;
	struct  in_addr sin_addr;
	char            sin_zero[8];
};
*  
* IPv6地址结构体
struct sockaddr_in6 {
	__uint8_t       sin6_len;       
	sa_family_t     sin6_family;    
	in_port_t       sin6_port;      
	__uint32_t      sin6_flowinfo;  
	struct in6_addr sin6_addr;     
	__uint32_t      sin6_scope_id;  
};
*/


 


int main() {
    int fd= socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr *add;
    struct sockaddr_in addr;
    memset(&addr,0,sizeof(addr));
    add = (struct sockaddr *)&addr;


    addr.sin_len=0xff;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    // 绑定所有机地址
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

// 绑定字符串的地址  "252.253.254.255"
// if (inet_pton(AF_INET, "127.0.0.1", &addr.sin_addr) <= 0) {
//     perror("inet_pton");
//     return -1;
// }

    


    if(-1==bind(fd,add,sizeof(addr)) )
    {
        perror("bind");
        return -1;
    }

    close(fd);

    return 0;
}
