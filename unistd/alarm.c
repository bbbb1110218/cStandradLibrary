#include <unistd.h>
#include <stdio.h>
// #include <signal.h>
#include <stdlib/stdlib.c>
#include <time.h>


/**
 *   @func:         unsigned int alarm(unsigned int seconds);
 *        
 *   @brief         如果 seconds 是 0，alarm 将取消任何先前设置的闹钟。
 *                  否则，alarm 在 seconds 秒后向进程发送一个 SIGALRM 信号。
 *                
           
 *      
 *   @param         seconds 秒
 *   @param
 *   @param 
 * 
 *   @return    alarm 返回先前设置的闹钟的剩余时间，或者如果没有先前设置的闹钟，则返回 0。
 * 
 *   @note      是的，你的理解是正确的。当你调用 alarm 函数设置一个闹钟时，
 *              你实际上是在告诉操作系统在指定的秒数后向你的进程发送一个 SIGALRM 信号。
 *              操作系统会跟踪每个进程设置的闹钟，并在闹钟时间到时向相应的进程发送 SIGALRM 信号。
 *              这个信号的默认行为是终止进程，但是你可以通过 signal 或 sigaction 函数设置一个信号处理函数来改变这个行为。
                当你的进程收到 SIGALRM 信号时，如果你设置了一个信号处理函数，那么这个函数会被调用。否则，如果你没有设置信号处理函数，那么进程会被终止。
*/

static int gValue=11;


void alarm_handler(int sig) {

    static int times=0;
    char *ptr;
    fprintf(stderr,"[我是闹钟处理函数,我要循环10次,现在是第%d 次,现在时间是%s]\n",times,__TIMESTAMP__);
    alarm(1);


}

void interrupte_handler(int sig){
    fprintf(stderr,"别几把瞎按");
}

int main() {

    /**signal注册闹钟信号处理函数*/
    signal(SIGALRM , alarm_handler);
    
    /**当你调用 alarm 函数设置一个闹钟时，你实际上是在告诉操作系统在指定的秒数后向你的进程发送一个 SIGALRM 信号。*/
    /** 参数为秒 */
    alarm(6);   

    setvbuf(stdout, NULL, _IONBF, 0);  /**设置标准输出没有缓存*/
    setvbuf(stderr,NULL, _IONBF, 0);




    char *str="我是一个文本,我在慢慢的显示,我大概还有32多行没有输出到屏幕。";


/** 延时打印字符串, 在打印的过程中会收到操作系统的 发送的SIGALRM 信号*/
int n=0;
while(++n <10)
{
        for(char *p=str;*p;p++){
        putchar(*p);
        usleep(32000);
    }
}

    

    
    return 0;
}