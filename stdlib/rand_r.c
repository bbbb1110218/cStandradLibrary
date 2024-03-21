#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *   @func: rand_r(unsigned int *seedp)
 *        
 *   @brief  伪随机数生成器，接受一个指向无符号整数的指针作为参数，返回一个伪随机整数。
 *           使用固定的种子值，可以得到相同的伪随机数序列。 
 *           想要得到不同的伪随机数序列，可以使用时间函数 time() 作为种子值。
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/
int main(){


    int i=10;
    unsigned int seed = (unsigned)time(NULL);

    while(--i){
        
        printf("%d ",rand_r(&seed));

    }
    

    return 0;
}