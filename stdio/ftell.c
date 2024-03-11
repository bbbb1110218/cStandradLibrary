#include <stdio.h>

/**
 * @brief:ftell 返回文件流的当前位置
*/

int main(){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt","r");
    if(!file)
    {
        perror("fopen");
        return -1;
    }
    //没有读取的位置是0
    long pos=ftell(file);
    fprintf(stdout,"file Pos=%lu\n",pos);
    char str[20];
    //读取完毕后是14
    unsigned long n=fread(&str,1,20,file);
    str[n]='\0';
    printf("read data=%s\n",str);
    pos=ftell(file);


    //因为只读取了一次,所以 pos=n=14
    fprintf(stdout,"read Count=%lu\n",n);
    fprintf(stdout,"file Pos=%lu\n",pos);
    fclose(file);
    return 1;
}