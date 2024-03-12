#include<stdio.h>

/**
 * @brief: fsetpos()	设置文件位置
 *         fsetpos() 函数用于设置文件位置。它的第一个参数是一个指向 FILE 对象的指针，
 *     都需要有一个pos_t 的变量，实际是一个long long 类型
 *      
*/

int main(){
    FILE *file=tmpfile();
    if (file == NULL) {
        perror("fopen");
        return 1;
    }
    fprintf(file, "Hello, world!\n");
    fpos_t pos;
    //取文件的地址
    fgetpos(file, &pos);
    printf("The position is %lld\n", pos);
    fprintf(stdout, "Pos is %ld!\n",ftell(file));
    pos=0;

    fsetpos(file, &pos);

    fprintf(stdout,"The Current position is %lld\n", pos);

    fclose(file);
    return 0;

}