#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *   @func:  long random(void)
 *        
 *   @brief srand 不好使
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 随机long类型伪随机整数
 * 
 *   @note 
*/
int main(){

    int i=10;

    //srand 对random()不起作用
    srand((unsigned)time(NULL));  

    while(--i){
        
        printf("%ld ",random() %100 );
    }

    return 0;
}