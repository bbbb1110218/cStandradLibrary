#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * @function:		int pthread_create(
 *                                pthread_t *thread,                //保存ID
 *                                const pthread_attr_t *attr,       //设置线程的属性
 *                                void *(*start_routine) (void *),   //开始的函数  
 *                                void *arg);                        //参数指针
 * 
 * @brief:			
 * 
 * @param:  thread  一个指向 pthread_t 类型的指针，这个指针用于存储新创建的线程的 ID
 * 
 * @param:  attr    一个指向 pthread_attr_t 类型的指针，这个指针用于设置线程的属性
 * 
 * @param:  start_routine 线程的入口点函数。这个函数的参数和返回值都是 void*。如果需要传递多个参数或返回多个值，
 *          可以通过一个结构体来封装，然后将这个结构体的指针转换为 void*。
 * 
 * @param:  arg 传递给 start_routine 的参数。这个参数可以是任何类型的数据，只需要将它转换为 void* 即可。
 * 
 * @return:  返回一个void *类型为空的指针，有什么数据可以封装在void*厘米啊 				
 * 
 * @notice:
 * 
*/


struct Foo{
    int total;
    int start;
    int end;
};


void* toUpper(void *arg){
    struct Foo *p=(struct Foo*)arg;
    for(int a = p->start;a <= p->end;a++){
        p->total +=a;
    }
    return arg;
}

int main() {

    struct Foo foo={0,1,100};
    struct Foo *result;

    
    pthread_t pit;
    
    pthread_create(&pit,NULL,toUpper,(void *)&foo);

    
    
    pthread_join(pit, (void *)&result);

    printf("sturct data: %d,%d,%d",result->start,result->end,result->total);

    return 0;
}
