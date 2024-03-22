#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * @function:		int pthread_create(
 *                      pthread_t *thread, 
 *                      const pthread_attr_t *attr,
                        void *(*start_routine) (void *), 
                        void *arg);
 * 
 * @brief:			
 * 
 * @param: thread  一个指向 pthread_t 类型的指针，这个指针用于存储新创建的线程的 ID
 * @param: attr    一个指向 pthread_attr_t 类型的指针，这个指针用于设置线程的属性
 * @param:  start_routine  参数 和返回值都是 void*
            如果需要返回值和参数 最好封装在一个结构体 
            然后转换成void * 就可以了
 * @param:
 * 
 * @return:   				
 * 
 * @notice:
 * 
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
