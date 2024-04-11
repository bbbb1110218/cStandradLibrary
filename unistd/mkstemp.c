#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 *   @func: int  mkstemp(char *template);
 *        
 *   @brief:    把template 里面的X字符换掉,并且创建一个文件,并且返回该文件的文件描述符
 *   @param:    char *template 必须是一个char 数组 
 *              不能是 char *的指针，要不然会被分配到静态区域
 *              需要包含大写的字母 XXXXXX 会被换掉
 *      
 *   @param
 *   @param 
 * 
 *   @return file descriptor if success else -1
 * 
 *   @note   路径名称要存在 要不然会出错
*/
int main(){

    char templat[] ="/tmp/XXXXXXXXXXXXXXXXXXXX";
    int fd = mkstemp(templat);

    if(fd ==-1)
    {
        perror("mkstemp");
        return -1;
    }

    char *data= "Hello World\n";
    write(fd,data,strlen(data));

    lseek(fd,0,SEEK_SET);   //把文件指针指向文件头

    char buff[1024];
    size_t len;

    while((len = read(fd,buff,1024-1)) > 0){
        buff[len] = '\0';
        printf("%s",buff);
    }

    close(fd);

    return 0;
}