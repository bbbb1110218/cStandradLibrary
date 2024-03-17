#include <stdio.h>
#include <unistd.h>

/**
 *   @func: pid_t	 fork(void) ;
 *        
 *   @brief
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return  if return value  <   0 ;  fork failed
 *              return value    ==  0;   child process
 *             retrun value     >   0;   parent process
 *   @note 
*/


int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // fork 失败
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {
        // 这是子进程
        printf("This is the child process, pid = %d\n", getpid());
    } else {
        // 这是父进程
        printf("This is the parent process, pid = %d, child pid = %d\n", getpid(), pid);
    }

    return 0;
}