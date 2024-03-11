#include <assert.h>
#include <stdio.h>

#define TEST  1

#undef FUCK   //不用判断 取消已经定义的  不管定义是否存在 不报错

#undef TEST     //取消已经定义好的


int main(){

    assert(1==1);  //判断表达式是否成立，不成立程序会中断
    printf("done");

    return 0;
}