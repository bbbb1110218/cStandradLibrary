#include <stdio.h>



/**
 * 
 *      #define SHOW(x, ...)  printf(x,__VA_ARGS__)
 * 
 *      @brief 宏定义的 ...会自动展开 为__VA_ARGS__ 
 * 
*/

#define SHOW(x, ... ) printf(x,__VA_ARGS__)


int main(){
    SHOW("展开之后是 %s 和 %s","hello","kitty");

    SHOW("展开之后是 %s 和 %s","hello","kitty");
    return 0;
}

#pragma