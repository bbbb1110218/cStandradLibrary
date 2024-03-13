#include <stdio.h>
#include <string.h>


/**     char *strcpy(char *__dst, const char *__src);
 *      拷贝src到des
*/

char *Qstrcpy(char *des,const char* src){
    if(sizeof(src) > sizeof(des)) return NULL;
    char *p=des;
    const char *p2=src;
    do{
        *p++ =*p2++;
    }while(*p2);
    *p='\0';
    return des;

}


int main(){

    char b1[20];
    char b2[20];
    const char *buff="hell423";
    printf("%s\n",Qstrcpy(b1,buff));
    printf("%s\n",strcpy(b2,buff));

    return 0;

}