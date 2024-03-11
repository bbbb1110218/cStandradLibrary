#include<stdarg.h>
#include<stdio.h>



/**
 * @param:参数
 *          ｜ 参数3 ｜
 *          ｜ 参数2 ｜
 *          ｜ 参数1 ｜
 *          ｜ count ｜
 *     1.va_list arg 先声明一个指针      
 *     2.va_start  用该该指针指向可变参数前面的一个参数    //如果 参数为 (int first,char *second , ...)
 *       va_start  应该开始指向 second 
 *     3. va_arg(arg,typeOfParame) 可变参数的类型
 *     4. va_end(arg) ;   销毁arg
 * 
 * @note:
 *      printf 是用fmt里面的%判断参数的个数,然后%d 判断参数是什么类型
 * 
 * @note:
 *      va_list 是在栈中参数的指针,指向函数的参数
 *     需要va_start(arg,firstParam) 之后的arg 才属于va_list类型
 *     stdio.h 有很多函数参数都是v开头的函数 比如
 *     (vprintf,vscanf,vfscanf,vsscanf) 都需要va_start之后才能使用
 * 
 *   
 * 
*/




void test(int argCount,...){
    va_list arg;
    va_start(arg,argCount);

    for(int i=0;i<argCount;i++){
        printf("index:%d parametric: %s\n",i,va_arg(arg, char *));
    }
    va_end(arg);
}


int main(){
    test(3,"hello","kitty","fuck");
    return 0;
}