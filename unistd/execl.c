#include <unistd.h>
#include <stdio.h>
#include <stdlib/stdlib.c>
#include <sys/wait.h>



/**
 *  @function:  execl("commandFullpath","command","arg1","arg2",NULL)
 *              execp("command","comman","arg1",... ,"NULL")
 * 
 *            l 是list
 *            v 是vector 指针数组最后一个是NULL
 *            p 是path 第一个命令会在path 里面找
 *            e 是environment 环境， 会把之前的环境全部换掉  最后一个是NULL
 *          
 *              
 *      
 * @example : execl("/bin/ls","ls","/root",NULL)   //exec list end with NULL
 *            execlp("ls","ls","/root",NULL)        //exec list 在PATH 里面找  end whith NULL
 * 
 *  @brief: execl 第一个参数要完整路径
 *          比如 你需要ls / 
 *          需要 "ls的完整路径" "ls" "/" NULL
 * 
 * 
 *  @param: NULL 
 *          the last argument must be NULL
 * 
 *  @return -1 if error
 * 
 * 
 *  @note:  execl 是 Unix 和 Linux 系统中的一个系统调用，用于执行一个新的程序。它会替换当前进程的映像为新程序的映像。
 *      l：这是 "list" 的缩写，表示函数接受一个参数列表。例如，execl 和 execle 函数接受一个以 NULL 结束的参数列表。
 *      v：这是 "vector" 的缩写，表示函数接受一个参数数组。例如，execv 和 execve 函数接受一个参数数组。
 *      p：这是 "path" 的缩写，表示函数会在 PATH 环境变量指定的目录中查找新程序。例如，execlp 和 execvp 函数会在 PATH 中查找新程序。
 *      e：这是 "environment" 的缩写，表示函数允许你指定一个新的环境变量数组。例如，execle 和 execve 函数允许你指定一个新的环境变量数组。

*/



int main(){
    
    pid_t n;

    n= fork();
    if(n<0){
        perror("fork");
        exit(1);
    }if(n==0){

        // if(execl("/bin/ls","ls","-alh","/",NULL) ==-1){
        if(execlp("ls","ls","/",NULL) ==-1){ 

            printf("execl error\n");    
            exit(1);
        }
    }else{
        wait(NULL);
    }




    
    // sleep(20);
    return 0;
}