#include <math.h>
#include <stdio.h>

/**
 * @function: cos 函数的使用
 *           cos 函数用于计算余弦值 邻边/斜边 的比值
 * 
*/
int main(){
    double a=60;
    double ca=a *(M_PI/180);
    printf("cos 60 = %f\n",cos(ca));
    return 0;
}