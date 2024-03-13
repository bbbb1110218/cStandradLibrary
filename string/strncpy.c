#include <stdio.h>
#include <string.h>


/**     char *strncpy(char *__dst, const char *__src, size_t __n);
 *       拷贝src的n个字符到dst
*/

char *Qstrncpy(char *des,const char* src,size_t size){
    int n=0;
    for(;n<size;n++){
        des[n]=src[n];
    }
    
    return des;



}


int main(){

    char b1[20]={};
    char b2[20]={};
    const char *buff="hell32323";

    printf("%s\n",strncpy(b2,buff,strlen(buff)+1));
    printf("%s\n",Qstrncpy(b1,buff,strlen(buff)+1));

    return 0;

}