#include <stdio.h>
#include <sys/socket.h>
#include <time.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * 
 * @file :守护时间 tcp的访问弹时间给她
 * @function:		
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
//处理错误，并且退出
void SHOW_ERR(char *str,int ExitCode){
    perror(str);
    exit(ExitCode);
}

int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <Port>",argv[0]);
        exit(EXIT_FAILURE);
    }
    struct sockaddr_in Server,Client;
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    if(fd < 0 ){SHOW_ERR("socket",-1);};

    int ok=1;
    setsockopt(AF_INET,SOL_SOCKET,SO_REUSEADDR,&ok,sizeof(ok));  //reuse addr and port
    
    memset(&Server,0,sizeof(Server));
    memset(&Client,0,sizeof(Server));

    Server.sin_family=AF_INET;
    Server.sin_addr.s_addr =INADDR_ANY;
    Server.sin_port=htons((unsigned short)atoi(argv[1]));
    // if(inet_pton(AF_INET, argv[1], &Server.sin_addr.s_addr) == -1){
    //     SHOW_ERR("inet_pton",EXIT_FAILURE);
    // }

    if(bind(fd,(struct sockaddr*)&Server,sizeof(Server)) == -1 || listen(fd,50) == -1){
        SHOW_ERR("bind",EXIT_FAILURE);
    }

    time_t *CurTime;
    struct tm *tm ;
    char tim_str[BUFSIZ];
    char CLIENTIP[BUFSIZ];
    char Msg[BUFSIZ];

    while(1){
        socklen_t len=sizeof(Client);
        int Cfd = accept(fd,(struct sockaddr *)&Client,&len);

        if(inet_ntop(AF_INET,&Client.sin_addr.s_addr,CLIENTIP,BUFSIZ) == NULL){
            SHOW_ERR("inet_ntop",-4);
        }

        time(CurTime);
        tm =localtime(CurTime);
        memset(tim_str,0,BUFSIZ);
        strftime(tim_str,BUFSIZ,"Curent time:%Y-%m-%d %H:%M:%S\n",tm);


        fprintf(stdout,"%s :%s\n",CLIENTIP,"Query time");
        write(Cfd,tim_str,strlen(tim_str));
        close(Cfd);


    }






    return 0;
}
