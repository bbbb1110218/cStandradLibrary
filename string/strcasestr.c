#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 *      
 *   char * strcasestr(const char *big,const char *little);
 *
 *   @param big    要搜索的位置
 *   @param little 要搜索的的字符串 (不区分大小写)
 *
 *
 *   @brief:不区分大小写的查找little在big 里面的位置
 *          找到返回指针
 *          找不到返回空
 *
 *
 * 
*/



bool chacmp(const char *ch1,const char *ch2){
    return (((unsigned char)(*ch1) - (unsigned char)(*ch2)) == 32)  || 
          (((unsigned char)(*ch1) - (unsigned char)(*ch2)) == -32)  || 
          (((unsigned char)(*ch1) - (unsigned char)(*ch2)) == 0)  ;
}


const char *Qstrcasestr(const char*big,const char*litt,size_t n){

    const char *move=big;
    int i;

    while(*move){
        if(chacmp(move,litt)){
            i=1;
            for(;i<n;i++){
                if(!chacmp(&move[i],&litt[i]))
                    break;
            }
            if(i==n)
                return move;
                

        }
        move++;
    }

    return NULL;

}


int main(){
    const char *big = "Hello, World!";
    const char *little = "woRLD";

    const char * tmp=strcasestr(big,little);
    const char * tmp2=Qstrcasestr(big,little,strlen(little));
    if(tmp){
        printf("find rersult = %s\n",tmp);
        printf("index = %zu\n",(size_t)(tmp -big));
    }
    else{
        printf("find nothing");
    }

    if(tmp2){
        printf("find rersult = %s\n",tmp2);
        printf("index = %zu\n",(size_t)(tmp2 -big));
    }
    else{
        printf("find nothing");
    }
    return 0;

}