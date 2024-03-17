#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib/stdlib.c>



/**
 *   @TODO: not DONE
 *   @func: 
 *        
 *   @brief
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main(){

    char buff[BUFSIZ];
    char buff2[BUFSIZ];

    memset(buff,0,BUFSIZ);
    memset(buff2,0,BUFSIZ);
    if(!*getcwd(buff,BUFSIZ)){
        printf("get current work directory is %s\n",buff);
    }else{
        fprintf(stderr,"Error at function getcwd");
        exit(1);
    }

    char*last =buff+strlen(buff);
    while(*last !='\\'){
        *last ='\0';
        last--;
    }
    *last='\0';

    int res =chdir(buff);

    if(!chdir(buff)){
        printf("change dir to %s\n",buff);
        
    }else{
        perror("chdir");
        exit(1);
    }



    return 0;
}

