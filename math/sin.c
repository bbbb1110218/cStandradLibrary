#include <math.h>   // 包含数学库头文件，提供数学函数如 sin 和常量如 M_PI
#include <stdio.h>  // 包含标准输入输出库头文件，提供 printf 函数


/**
 * @function: sin 函数的使用
 *            sin 函数用于计算正弦值 对边/斜边
 *            sin 函数的参数是弧度值
 * 
 * @brief:弧度是角度的一种度量方式，1 弧度等于圆的周长 /半径的比率
 *          圆的周长为 2πr，半径为 r，所以 1 弧度等于 2πr / 360  /r  = π / 180
 *          
*/
int main() {
    double degrees = 30.0;                  // 定义一个变量表示角度，单位为度
    double radians = degrees * (M_PI / 180.0); // 将角度转换为弧度。1 度 = π / 180 弧度
    double t = sin(radians);                // 计算弧度的正弦值
    printf("t = %f\n", t);                  // 输出结果，格式化为浮点数
    return 0;                               // 返回 0 表示程序正常结束
}