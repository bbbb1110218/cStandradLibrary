#include <stdio.h>
#include <unistd.h>


/**
 *   @func:         int usleep(useconds_t usec);
 * 
 *                 usleep 不是 un sleep
 *                  是微秒 sleep
 *        
 *   @brief         暂停当前进程 usec 微秒
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return     0 if sucess else -1
 * 
 *   @note 
*/


int main() {
    printf("Sleeping for 1 second...\n");
    usleep(1000000);
    printf("Awake!\n");
    return 0;
}