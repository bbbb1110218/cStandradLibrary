#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *   @func:          void *alloca(size_t size)
 *                   alloca 是 allocate/分配 的简写    
 *              
 *   @brief         alloca 函数用于在栈上分配内存。这个函数的特点是，分配的内存不需要手动释放，当函数返回时，分配的内存会自动被释放
 *                  在栈上分配内存,类似 char buff[size]
 *      
 *   @param         size 数量
 *   @param
 *   @param 
 * 
 *   @return        void * 指针需要转换
 * 
 *   @note 
*/
void print_hello(const char* name) {
    int size = strlen(name) + 8;  // 计算需要的内存大小
    char* greeting = (char*) alloca(size);
    strcpy(greeting, "Hello, ");
    strcat(greeting, name);
    printf("%s\n", greeting);
}

int main() {
    print_hello("World");
    return 0;
}