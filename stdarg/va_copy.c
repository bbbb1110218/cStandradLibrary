#include <stdarg.h>
#include <stdio.h>


/** @brief
 * va_list 是为了声明第一个参数的指针，但是使用va_arg了 该指针会指向后面
 * 所以需要 va_copy备份一下 第一个指针，防止在函数里面第二次使用 
 * or
 * 或者 在取函数参数 取完了该取的 可以传递给第二个函数
*/

//va_list是在栈中参数的指针,指向函数的参数
void print_args_copy(va_list ap)
{
    va_list ap_copy;
    va_copy(ap_copy, ap);

    printf("Copied list:\n");
    int i;
    while ((i = va_arg(ap_copy, int)) != 0)
    {
        printf("%d ", i);
    }
    printf("\n");

    va_end(ap_copy);
}

void print_args(int arg1, ...)
{
    va_list ap;
    va_list ap2;
    va_start(ap, arg1);  //有开始的参数 从arg1开始

    printf("Original list:\n");
    for (int i = arg1; i != -1; i = va_arg(ap, int))
    {
        printf("%d ", i);
    }
    printf("\n");

    print_args_copy(ap);

    va_end(ap);
}


/*va_arg的时候 指针会移动到下一个参数 所以需要va_copy 拷贝一下头指针*/
double sample_stddev(int count, ...) 
{
    /* Compute the mean with args1. */
    double sum = 0;
    va_list args1;
    va_start(args1, count);
    va_list args2;
    va_copy(args2, args1);   /* copy va_list object 拷贝一个指针 */
    for (int i = 0; i < count; ++i) {
        double num = va_arg(args1, double);
        sum += num;
    }
    va_end(args1);
    double mean = sum / count;
 
    /* Compute standard deviation with args2 and mean. */
    double sum_sq_diff = 0;
    for (int i = 0; i < count; ++i) {
        double num = va_arg(args2, double);
        sum_sq_diff += (num-mean) * (num-mean);
    }
    va_end(args2);
    return (double)(sum_sq_diff / count);
}





int main()
{
    //第一个参数
    print_args(1, 2, 3, -1,4,5,3,1,0);

    
    printf("使用sample_stddev函数的值是 %f\n",sample_stddev(4,2.65,2.14,1.23,12.3));

    return 0;
}