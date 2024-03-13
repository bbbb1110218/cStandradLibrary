#include <stdio.h>
#include <string.h>


/**
 *  void *memcpy(void *__dst, const void *__src, size_t __n);
 *  
 *   @param dst 目标位置
 *   @param src  源位置
 *   @param n    拷贝的字节数量
 * 
 *    @note 如果拷贝字符串记得等于0
 *          memcpy(ptr,"some char",5);
 *          ptr[5]='\0
 * 
*/


void *Qmemcpy(void *dst,const void*src,size_t n){
    for(int i=0;i<n;i++){
        ((char *)dst)[i]=((char *)src)[i];
    }
    
    return dst;
}



int main(){
    char buff[BUFSIZ]="123456789987654321";
    printf("%s\n",(char *)memcpy(buff,"hello,",2));
    buff[2]='\0';
    memcpy(buff+2,"hello,",5);
    buff[2+5]='\0';
    printf("%s",buff);



return 0;
}