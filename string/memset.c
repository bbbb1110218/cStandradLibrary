#include <stdio.h>
#include <string.h>

/**
 *  memset(void * dst,int ch,size_t size)'
 * 
 * @param:填充 dst 到dst+size 的区域为 ch 
 * 
 * 
*/

void * Qmemset(void *dst,int fill,size_t size){
    for(int i=0;i<size;i++){
        *(char *)(dst+i)=fill;
    }
    return dst;
}




int main() {
    char str[20] = "Hello, World!";
    printf("Before memset: %s\n", str);
    
    memset(str+1, 0, 5);
    // memset(str+1, '\0', 5);
    // memset(str+1, 0, 5);
    printf("After memset: %s\n", str);
    // char ch='\0';
    // printf("ch = %X\n",ch);
    
    return 0;
}