#include <stdio.h>
#include <stdlib.h>


/**
 * @brief 主函数
 *
 * 这个函数调用 div 函数来计算两个整数的商和余数，并打印结果。
 *
 * @return 程序的退出状态。如果成功，返回 0；如果失败，返回 1。
 */

int main(){
    int first=10;
    int send = 3;

    div_t d=div(first,send);
    printf("商：%d\n",d.quot);
    printf("%d\n",d.rem);
    
}