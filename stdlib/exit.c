
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * @brief 主函数 exit()
 *
 * 这个函数首先打印一条消息，然后调用 exit 函数结束程序的执行。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */


int main(){
    pid_t pid;

    pid=fork();
    if(pid <0){
        perror("fork");
        exit(1);
    }else if(!pid){
        execlp("ls","ls","/",NULL);
        printf("Child process\n");
        exit(42);
    }else{
        printf("Parant Process Wait for child\n");
        int status;
        waitpid(pid,&status,0); 
        if (WIFEXITED(status)) { //(_W_INT(x) & 0177) ==0
            printf("Child exited with status %d\n", WEXITSTATUS(status)); //   ((_W_INT(x) >> 8) & 0x000000ff)
        }

    }
}


