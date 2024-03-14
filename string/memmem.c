#include <stdio.h>
#include <string.h>


/**
 *     memmem(void *big,size_t big_size,void *litt,size_t litt_size);
 * 
 *     其中，big 是大块内存的指针，
 *     big_len 是大块内存的大小，
 *     little 是小块内存的指针，
 *     little_len 是小块内存的大小。
 *     
 *      如果 little 在 big 中找到，函数返回一个指向 big 中 little 首次出现位置的指针。如果 little 没有在 big 中找到，函数返回 NULL。
 * 
 * 
*/


const void * Qmemmem(const void *big,size_t bigs,const void* litt,size_t littsize){

    const void *tmp=big;
    
    while(tmp !=big +bigs){
        if(!memcmp(tmp,litt,littsize)) return tmp;
        tmp++;   
    }   

    return NULL; 
}

int main(){
    const char *str="Hello fuck you bitch";
    const char *find="ello";

    const char *tmp=Qmemmem(str, strlen(str), find, strlen(find));
     const char *tmp2=memmem(str, strlen(str), find, strlen(find));
    
    
    if(tmp){
        printf("find:%s\n",tmp);
    }else{
        printf("Not found\n");
    }
    
    
    
    if(tmp2){
        printf("find:%s\n",tmp2);
    }else{
        printf("Not found\n");
    }
    return 0;
}

