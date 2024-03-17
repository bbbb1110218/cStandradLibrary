#include <stdio.h>
#include <stdlib/stdlib.c>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 *    @function:    execlp("command","command","arg1",...,NULL)
 * 
 *    @brief :      command会在PATH 里面找
 * 
 *    
 * 
*/

int main(){
    pid_t pid;

    pid =fork();
    if(pid <0 )
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }else if(pid ==0){
        //child process
        sleep(2);
        printf("child process\n");
        
        if(execlp("showInt","showInt","36",NULL) ==-1)  //error
        {
            perror("execlp");
            exit(EXIT_FAILURE);
        }
    }else{  
        system("echo $PATH");
        putchar('\n');
        wait(NULL);
    }

    return 0;
}