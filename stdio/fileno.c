#include<stdio.h>
#include<unistd.h>
#include<assert.h>


#define BUFFSIZE 100


int main(){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/README.md","r");
    
    //获取文件描述符
    int fd=fileno(file);

    printf("fd= %d\n",fd);
    printf("file->_file = %hd\n",file->_file);



    fclose(file);
    return 0;
}