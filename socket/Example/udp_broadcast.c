#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>


/**
 * file:udp_broadcast udp广播
 
*/

#define BROADCAST_ADDR "192.168.50.255" // 广播地址

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <broadcast_port> <response_port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int broadcast_port = atoi(argv[1]);
    int response_port = atoi(argv[2]);

    if (broadcast_port <= 0 || broadcast_port > 65535 || response_port <= 0 || response_port > 65535) {
        fprintf(stderr, "Invalid port number.\n");
        exit(EXIT_FAILURE);
    }

    int sockfd;
    struct sockaddr_in broadcast_addr, recv_addr;
    //设置权限 广播许可
    int broadcast_permission = 1;
    socklen_t recv_addr_len;
    char buffer[1024];

    // 创建UDP套接字
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // 设置广播权限
    if (setsockopt(sockfd, SOL_SOCKET, SO_BROADCAST, &broadcast_permission, sizeof(broadcast_permission)) == -1) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }

    // 设置广播地址
    memset(&broadcast_addr, 0, sizeof(broadcast_addr));
    broadcast_addr.sin_family = AF_INET;
    broadcast_addr.sin_port = htons(broadcast_port);
    broadcast_addr.sin_addr.s_addr = inet_addr(BROADCAST_ADDR);

    // 发送广播消息
    char message[50];
    snprintf(message, sizeof(message), "Who has port %d open?", response_port);
    if (sendto(sockfd, message, strlen(message), 0, (struct sockaddr *)&broadcast_addr, sizeof(broadcast_addr)) == -1) {
        perror("sendto");
        exit(EXIT_FAILURE);
    }

    printf("Broadcast message sent.\n");

    // 接收广播响应
    recv_addr_len = sizeof(recv_addr);
    if (recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr *)&recv_addr, &recv_addr_len) == -1) {
        perror("recvfrom");
        exit(EXIT_FAILURE);
    }

    // 提取发送方IP地址和响应内容
    char sender_ip[INET_ADDRSTRLEN];
    printf("Received response from: %s\n", inet_ntop(AF_INET, &recv_addr.sin_addr, sender_ip, INET_ADDRSTRLEN));
    printf("Response content: %s\n", buffer);

    // 关闭套接字
    close(sockfd);

    return 0;
}
