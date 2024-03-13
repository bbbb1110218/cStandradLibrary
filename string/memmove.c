/**
 * @brief  memmove 从后面开始复制
 *         当一段内存重叠的时候就会错误
 *          比如 "hello" 需要"h向后移动一字节" 达到"hhello" 这样
 *          char ch[]="hello";
 *          memmove(ch+1,ch,strlen(ch)+1); 
 *
 * @param dest 目标内存块的指针，用于存储复制后的内容。
 * @param src 源内存块的指针，用于指定要复制的内容。
 * @param n 要复制的字节数。
 * @return 返回指向目标内存块的指针。
 *
 * @note memmove函数可以处理两个内存块有重叠的情况，因此在这种情况下使用memmove函数比使用memcpy函数更安全。
 */

#include <stdio.h>
#include <string.h>


void * Qmemmove(void *des,void *src,size_t n){
    while(n--){
        ((char *)des)[n]=((char *)src)[n];
    }
    return des;

}


int main() {
    char buff[20]="hello,kitty";
    memmove(buff+3,buff,strlen(buff)+1);
    printf("%s\n",buff);

    
    return 0;
}
