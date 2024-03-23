#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * @function: 

 * 
 * @brief: 创建一个新的线程，并设置其属性和入口点函数。
 * 
 * @param: thread 一个指向 pthread_t 类型的指针，这个指针用于存储新创建的线程的 ID。
 * @param: attr 一个指向 pthread_attr_t 类型的指针，这个指针用于设置线程的属性。如果传递 NULL，那么线程将使用默认的属性。
 * @param: start_routine 线程的入口点函数。这个函数的参数和返回值都是 void*。如果需要传递多个参数或返回多个值，可以通过一个结构体来封装，然后将这个结构体的指针转换为 void*。
 * @param: arg 传递给 start_routine 的参数。这个参数可以是任何类型的数据，只需要将它转换为 void* 即可。
 * 
 * @return: 如果线程成功创建，返回 0；如果线程创建失败，返回一个错误码。				
 * 
 * @notice: start_routine 函数应该返回一个 void* 类型的值。这个值可以通过 pthread_join 函数获取。
*/


void* toUpper(void *arg){
    char *p=arg;

    for(int i=0;p[i];i++){
        if(p[i] >= 'a' && p[i] <= 'z')
            p[i] -= 0x20;
    }

    return arg;
}

int main() {
    char Buff[BUFSIZ]="hello myname is xiGua!";
    
    pthread_t pit;
    
    pthread_create(&pit,NULL,toUpper,(void *)Buff);

    void *result;

    pthread_join(pit, &result);


    printf("Buff addr   = %p\n",Buff);
    printf("result addr = %p\n",result);
    

    puts(Buff);




    return 0;
}
