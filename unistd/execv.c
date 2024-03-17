#include <stdio.h>
#include <stdlib/stdlib.c>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 *    @function:    int	 execv(const char * __path, char * const * __argv)
 *                  
 *                  exec v是vector  endwith NULL
 * 
 *                  char *args[] ={"ls","/root",NULL};  
 *    @brief :     
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

        printf("child process\n");

        //Can't char **arg ={...,NULL};
        char *args[]={"ls","/Users",NULL};
        
        if(execv("/bin/ls",args) ==-1)  //error
        {
            perror("execlp");
            exit(EXIT_FAILURE);
        }
    }else{  

        wait(NULL);
    }

    return 0;
}