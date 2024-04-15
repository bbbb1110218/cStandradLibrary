#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
/**
 * @function: struct hostent *gethostbyname(const char *hostname)		
 * 
 * @brief:	 gethostbyname函数用于根据主机名获取网络地址。它返回一个hostent结构体，该结构体包含了主机的信息，如主机名、别名、地址类型、地址长度和地址列表。		
 * 
 * @param: hostname 主机字符 like ：www.baidu.com
 * @param:
 * @param:
 * 
 * @return:   	struct hostent {
	char	*h_name;	            //主名称        official name of host 
	char	**h_aliases;            //别名列表	     alias list 
	int	h_addrtype;	                //主机地址类型    host address type 
	int	h_length;	                //地址长度        length of address 
	char	**h_addr_list;	        //地址列表地址     list of addresses from name server 
 *              
 *              }			
 * 
 * @notice:
 * 
*/
#if 1

#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <strings.h>

void print_name(struct hostent* sh) {
    printf("Host name: %s\n", sh->h_name);
}

void print_alias(char **alias_list) {
    if (*alias_list == NULL) {
        return;
    }

    printf("Alias: %s\n", *alias_list);
    print_alias(alias_list + 1);
}

void print_addr(char **addlist){
    if(*addlist == NULL) return ;
    char BUFF[BUFSIZ];
    bzero(BUFF,BUFSIZ);
    if(inet_ntop(AF_INET,(void *)*addlist,BUFF,(size_t)BUFSIZ-1)!=NULL){
        printf("addr :%s\n",BUFF);
    }
    print_addr(addlist +1);

}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <hostname>\n", argv[0]);
        return 1;
    }

    struct hostent *he = gethostbyname(argv[1]);
    if (he == NULL) {
        perror("gethostbyname");
        return 1;
    }

    print_name(he);
    print_alias(he->h_aliases);
    print_addr(he->h_addr_list);

    return 0;
}



















#else  //if 1 
void print_name(struct hostent*sh){
    printf("Function : [print_name]  value = %s\n",sh->h_name);
}


void  print_alias2(char ** alias_list){
    if(*alias_list ==NULL)return ;
    printf("%s\n",*alias_list);
    print_alias2(alias_list +1);

}

void print_alias(struct hostent *sh){
    printf("alias List:");
    print_alias2((char **)sh->h_aliases);

}


void print_addr(struct in_addr ** lt){
    if(!*lt)
        return ;
    char BUFF[100];
    inet_ntop(AF_INET,*lt,BUFF,100);
    printf("%s\n",BUFF);
    print_addr(lt +1);
}

int main(int argc,char *argv[]) {
    if(argc !=2){
        fprintf(stderr,"Usage:%s <host Str>",argv[0]);
        exit(-1);
    }


    struct hostent *sh=gethostbyname(argv[1]);
    print_name(sh);
    print_alias(sh);
    puts("\n");
    print_addr((struct in_addr **)sh->h_addr_list);

    

    return 0;
}
#endif //end if 1