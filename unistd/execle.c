#include <stdio.h>
#include <stdlib/stdlib.c>
#include <unistd.h>
#include <sys/wait.h>



/**
 *  @function :     int	 execle(const char * __path, const char * __arg0, ...)
 *                  
 *  @example:        const char *envp[]={"hello=kitty","fuck=you",NULL};
 *                      execle("ls/bin/env","env","NULL",envp);
 * 
 *  @brief:           新的环境变量会把之前的环境变量全部换掉
 * 
 * 
 * @ return : -1 for failed  
*/




int main(){
    pid_t pid;
    
    const char *envp[]={"hello=kitty","fuck=you",NULL};
    //NOTE:不能 char **envp;


    pid=fork();

    if(pid < 0){
        perror("fork");
        exit(EXIT_FAILURE);

    }else if (!pid) {

        //notice:新的环境变量会把之前所有的环境变量全部换掉

        if(execle("/usr/bin/env","env",NULL,envp) ==-1)
        {
            perror("execle");
            exit(EXIT_FAILURE);
        }
        
    }else{
        wait(NULL);
    }
    return 0;
}