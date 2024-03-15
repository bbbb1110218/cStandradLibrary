#include <stdio.h>
#include <unistd.h>



/**
*       getcwd(buff,buffsize); 获取当前路径
        get current work directory
        获取当前工作路径


        or getwd(char *bf)
        get work directory 获取工作路径
        
*        
*/
int main() {
    char buf[1024];

    if (getcwd(buf, sizeof(buf))) {
        printf("Current working directory: %s\n", buf);
    } else {
        perror("getcwd error");
    }

    char buf2[1023];
    getwd(buf2);
    printf("getwd return %s\n",buf2);

    return 0;
}