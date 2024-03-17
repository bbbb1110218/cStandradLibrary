#include <stdio.h>
#include <stdlib/stdlib.c>
#include <unistd.h>

/**
 *  int	 atexit(void (* _Nonnull)(void));
 *  
 *  @brief: 退出程序的时候 会调用函数
 *          需要提前注册
 *          注册多个程序的时候，会按照先进后出的顺序调用函数
 *  @param  没有参数和返回值的函数
 * 
 * 
 *  @note    正常都可以退出，比如exit 和return函数
 *           但是当使用_exit()退出程序的时候 不会清理资源，所以该无效
 * 
*/


void sayGoodbye(){
    printf("Bye-bye\n");
}

void cleanup() {

    printf("Cleanup function called\n");
}

int main() {
    atexit(cleanup);atexit(sayGoodbye);

    printf("Calling exit....\n");
    // _exit(1);
    return 0;
}