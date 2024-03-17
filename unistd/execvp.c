#include <stdio.h>
#include <stdlib/stdlib.c>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 *    @function:        int	 execvp(const char * __file, char * const * __argv) 
 * 
 *    @param __file   path
 *    @param __argv char*argv[]= {...,NULL}

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
    // char *envp[]={"Hello=kitty","fuck=you",NULL};
    if(pid <0 )
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }else if(pid ==0){
        //child process
        sleep(2);
        printf("child process\n");
        
        if(execvp("env",args) ==-1)  
        {
            perror("execvp");
            exit(EXIT_FAILURE);
        }
    }else{  

        wait(NULL);
    }

    return 0;
}