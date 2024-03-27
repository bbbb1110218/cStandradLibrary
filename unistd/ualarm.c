#include <stdio.h>
#include <unistd.h>
#include <signal.h>


/**
 *   @func:     useconds_t ualarm(useconds_t start, useconds_t perid);
 *              1秒 = 1000毫秒
 *              1毫秒 =1000微秒
 *        
 *   @brief  start 微秒之后, 每隔 perid微秒发送一次闹钟信号
 *           需要注册闹钟信号
 * 
 *   @notice start参数最好设置大于0 要不然不好使
 *          
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note  
*/

void alarm_hander(int unused){
    static int count =0;
    count++;
    printf("Param Value = %d,alarm hander count =%d\n",unused,count);
    // fflush(stdout);
}

int main(){

    signal(SIGALRM,alarm_hander);            //注册闹钟信号

    ualarm(1, 1000000);                      //1微秒之后 每隔1000000微秒 发送一次闹钟信号
    printf("\nhello,kitty\n");

    char Bufff[BUFSIZ];
    fgets(Bufff,BUFSIZ-1,stdin);


    printf("intput data = %s\nDone\n",Bufff);



    

    return 0;
}