#include <stdio.h>
#include <unistd.h>


/**
	@function:
			getpid()

	@brief:获取当前进程的进程ID

   
	@return: the process ID of the calling process.
 
 */

int main(){
	pid_t pid;

	pid =fork();
	if(pid < 0)
	{
		printf("Fork failed\n");
	}else if(pid == 0){
		printf("Child process: %d\n", getpid());
	}else{
		printf("Parent process: %d\n", getpid());
	}

	return 0;
}
