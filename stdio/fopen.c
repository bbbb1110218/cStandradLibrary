#include<stdio.h>
#include<unistd.h>
#include<assert.h>


/**
 * @brief: 读取文件
 * @param:
 *  fopen 函数的 mode 参数用于指定打开文件的模式。以下是一些常用的模式：
        "r"：以读取模式打开文件。文件必须存在，否则打开会失败。
        "w"：以写入模式打开文件。如果文件不存在，会创建一个新文件。如果文件存在，会删除文件的内容。
        "a"：以追加模式打开文件。如果文件不存在，会创建一个新文件。如果文件存在，写入的数据会被添加到文件的末尾。
        "r+"：以读取/写入模式打开文件。文件必须存在，否则打开会失败。
        "w+"：以读取/写入模式打开文件。如果文件不存在，会创建一个新文件。如果文件存在，会删除文件的内容。
        "a+"：以读取/追加模式打开文件。如果文件不存在，会创建一个新文件。如果文件存在，写入的数据会被添加到文件的末尾。
*/

#define BUFFSIZE 100


int main(){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/README.md","r+");
    
    //文件描述符
    short fd=file->_file;

    assert(fd >2);

    char buff[BUFFSIZE];
    ssize_t r;                        //ssizt_t 为unsigned long 类型
    while((r =read(fd,buff,BUFFSIZE-1)) >0){  //读取缓存 应该小于1个字节 要不然会错误
        buff[r]='\0';
        printf("[[%lu]] ",r);
        printf("%s \n",buff);
    }


     printf("end of ssize_T [[%lu]]\n ",r);


    fclose(file);
    return 0;
}