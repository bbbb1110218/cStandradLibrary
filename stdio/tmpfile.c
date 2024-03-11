#include <stdio.h>


int main(){
    FILE * file=tmpfile(); //返回一个临时文件给你操作
    fclose(file);

    return 0;
    
    
}