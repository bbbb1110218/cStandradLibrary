#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <time.h>
/**
 * @function:    size_t read(int fd,char *buff,Max_buffSize);
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

#define PRIVATE_PORT 90 

int PORT=8080;
int SubProcess(int fd);


int main(int argc,char *argv[]) {
    if(argc ==2 && !strncasecmp(argv[1],"-h",2)){
        fprintf(stderr,"Usage :%s <Port> \n",argv[0]);
        exit(-1);
    }

    if(argc ==2){
        PORT =atoi(argv[1]);
    }
    int fd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));

    int fileFd=open("delete.txt",O_CREAT |O_APPEND|O_RDWR,0644);
    if(fileFd<0)
    {
        perror("open");
        exit(-1);
    }

    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(fd, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("bind");
        exit(-1);
    }

    if (listen(fd, 15) < 0) {
        perror("listen");
        exit(-1);
    }
    fprintf(stderr, "Listen Port %d\n",PORT);
    while (1) {
        struct sockaddr_in client_addr;
        socklen_t client_len = sizeof(client_addr);
        int client_fd = accept(fd, (struct sockaddr *)&client_addr, &client_len);
        if (client_fd < 0) {
            perror("accept");
            exit(-1);
        }
        fprintf(stderr,"Client IP: %s fd:%d\n", inet_ntoa(client_addr.sin_addr),client_fd);
        pthread_t pt;
        if(pthread_create(&pt,NULL,(void *)SubProcess,(void *)(intptr_t)client_fd) !=0){
            perror("pthred_create");
            exit(-1);
        }
        pthread_detach(pt);



        // char Buff[BUFSIZ];
        // memset(Buff,0,BUFSIZ);

        // size_t readSize=0;
        // while((readSize = read(client_fd,Buff,BUFSIZ-1)) > 0)

        


        // 这里可以处理客户端的连接请求，例如通过 read 和 write 函数与客户端通信
        // ...
        
    }

    return 0;
}


//子进程读取fd
int SubProcess(int fd){
    char *tmpStr="Please Enter PassWord:";
    char *errmsg="Passworld Error\ntry again:";
    write(fd,tmpStr,strlen(tmpStr));
    char passWd[BUFSIZ];
    memset(passWd,0,BUFSIZ);
    size_t readSize=0;

    int retryCount=3;
    for(int i=0;i<retryCount;i++){
        if((readSize=read(fd,passWd,BUFSIZ) )>0){
            passWd[readSize]='\0';
            if(!strncmp(passWd,"654321a",6)){
                const char *isRight="密码正确, 你说的每句话我都会加上时间纪录下来 exit for 退出\n";
                write(fd,isRight,strlen(isRight));
                break;
            }else{
                
                if(i == retryCount-1 ){
                    const char *bye="Bye bye\n";
                    write(fd,bye,strlen(bye));
                    fprintf(stderr,"fd:%d failed %d times\n",fd,3);
                    close(fd);
                    return -1;
                }
                write(fd,errmsg,strlen(errmsg));
                continue;
            }
        }

    }


    
    





    char fileBuff[BUFSIZ];

    char Buff[BUFSIZ];
    memset(fileBuff,0,BUFSIZ);
    memset(Buff,0,BUFSIZ);
    // int fileFd=open("delete.txt",O_CREAT |O_APPEND|O_RDWR,0644);
    // setvbuf()
    FILE *filefd=fopen("delete.txt","a+");
    // setvbuf(filefd,)
    
    if(filefd ==NULL)
    {
        perror("open");
        exit(-1);
    }
    setlinebuf(filefd);

    readSize=0;

    while((readSize = read(fd,Buff,BUFSIZ-1)) > 0){
        
        time_t now=time(NULL);
        
        Buff[readSize]='\0';
        if(!strncasecmp(Buff,"exit",4)){
            const char *isDone="goodBye";
              write(fd,isDone,strlen(isDone));
              close(fd);
              return 1;
        }
        memset(fileBuff,0,BUFSIZ);


        struct tm *ti=localtime(&now);
        
        strftime(fileBuff,BUFSIZ,"%Y-%m-%d %H:%M:%S  ",ti);
        strcat(fileBuff,Buff);


        if(fwrite(fileBuff,strlen(fileBuff),1,filefd) <=0){
            perror("fwrite");
            exit(100);
        };
    //    sync();
        for(int i=0;i<readSize;i++){
            Buff[i]=toupper(Buff[i]);
        }
        write(fd,Buff,readSize);
        
    }
    fclose(filefd);
    
    if(readSize ==0 ){
        fprintf(stderr,"Close fd : %d\n",fd);
        close(fd);
        return 0;
    }
    else 
        return errno;
        

};