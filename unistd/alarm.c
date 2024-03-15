#include <unistd.h>
#include <stdio.h>
// #include <signal.h>
#include <stdlib.h>
#include <time.h>


/**
 *   @func:         unsigned int alarm(unsigned int seconds);
 *   @func:         unsigned int alarm(unsigned int seconds);
 *        
 *   @brief         如果 seconds 是 0，alarm 将取消任何先前设置的闹钟。否则，alarm 在 seconds 秒后向进程发送一个 SIGALRM 信号。
 *                
 * 
 *                  
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return          alarm 返回先前设置的闹钟的剩余时间，或者如果没有先前设置的闹钟，则返回 0。
 * 
 *   @note 
*/

static int gValue=11;


void alarm_handler(int sig) {

    static int times=0;
    char *ptr;
    if(--gValue){
            // fprintf(stderr,"\n我是闹钟处理函数,我要循环10次，现在是第%d 次,现在时间是%s\n",++times,__TIMESTAMP__);

            // fprintf(stderr,"欢迎收看瑟瑟文学网 http://www.pornhub.com");
            // // asprintf(&ptr,"say 我要重复10次这句话，现在是第%d句",++times);

            // system(ptr);
            system("echo hellokkkkkkkkkkkkkkkk");
            // free(ptr);
            alarm(1);
    }

}

void interrupte_handler(int sig){
    fprintf(stderr,"别几把瞎按");
}

int main() {
    signal(14, alarm_handler);
    signal(SIGINT,interrupte_handler);
    alarm(1);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr,NULL, _IONBF, 0);




    char *str="我是一个文本,我在慢慢的显示,我大概还有32多行没有输出到屏幕。";


;

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