#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 *    @function:    execve(const char * __file, char * const * __argv, char * const * __envp)
 * 
 *    @brief :      
 *    @param __file command full path
 *    @param __argv char*argv[]= {...,NULL}
 *    @param __envp char *envp[]= {...,NULL}
  *                  
 * 
 *    @brief :      command会在PATH 里面找
 * 
 *    
 * 
*/

int main(){
    pid_t pid;

    pid =fork();

    char *args[]={"env",NULL};
    char *envp[]={"Hello=kitty","fuck=you",NULL};
    if(pid <0 )
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }else if(pid ==0){
        //child process
        sleep(2);
        printf("child process\n");
        
        if(execve("/usr/bin/env",args,envp) ==-1)  
        {
            perror("execve");
            exit(EXIT_FAILURE);
        }
    }else{  

        wait(NULL);
    }

    return 0;
}