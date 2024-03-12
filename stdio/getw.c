#include <stdio.h>


/**
 *   int  getw(FILE *)
 *          putw(int, FILE*)
 * 
 *   从文件流中读或者写 一个int 2进制格式 一次读取4个字节   
 * 
*/

int main(){
    FILE * fp=tmpfile();
    int count=5;

    int value=5;
    while(--count)
    putw(value++,fp);

    fpos_t p=0;
    fsetpos(fp,&p);


while(count <5){


    int c=getw(fp);
    printf("value = %d\n",c);
    count++;
    }
    return 0;


}