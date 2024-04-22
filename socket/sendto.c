#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>


/**
 * @function:	    ssize_t recv(int, void *, size_t, int) 	
 * 
 * @brief:			
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:   				
 * 
 * @notice:
 * 
*/

char *msg="Hello kitty";

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
    

    return 0;
}
