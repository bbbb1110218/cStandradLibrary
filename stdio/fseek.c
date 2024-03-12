#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief:fseek 返回文件流的当前位置
 * @param:file 文件流
 *        offset 偏移量
 *        whence 偏移的起始位置
 *          - SEEK_SET 文件开始
 *          - SEEK_CUR 当前位置
 *          - SEEK_END 文件结束
 * @return:成功返回0，失败返回-1
 * @note:  
 *      fopen用不同模式读写 位置会不同
 *      "r" readOnly   文件指针会设置在文件的开始
 *      "w" writeOnly  文件会清空 文件指针放在开始的位置
 *      "a" 追加append  只能写，如果文件不存在 文件指针在开头 
 *                            如果文件存在 会创建文件文件指针会放在文件最后
 *      "r+" 读写模式,   文件必须存在，文件指针会被设置在开始的位置
 *      "w+" 读写模式，  如果文件存在，内容会被清空，
 *                      如果文件不存在，会建立一个新文件，文件指针会被设置在开始的地方 
 *      “a+” 可以读写，文件指针放在最后
 * 
 *       r 代表可以读 r+是代表可以读写 指针放在第一个
 *       w 代表可以只写 w+代表可以读写  指针可以放在第一个
 *       a 代表写append  指针放在最后
 *       a+ 代表可以读写 指针放在最后
 *      
*/
long fseekValue;
#define SHOW(fp) printf("当前位置:%ld\n",ftell(fp))

char ch='@';

char buff1[1024];
char buff2[1024];
char rep;

/**
 * 要替换文本里面的 0 为 @
 * 用r+模式 指针放在文件头 可以读写
 * 文件用a+模式 不行好像无法替换 要写的数据始终放在最后
*/
int main(){
    FILE *file=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","r+");
    SHOW(file);
    fseek(file,0,SEEK_END);
    long pos=ftell(file);
    // rewind(file);
fseek(file,0,SEEK_SET);
    //要小于等于，要不然最后一个字符无法处理
    for(int i=0;i<=pos;i++){
       if(!fread(&rep,1,1,file)){
        if(feof(file)){
            printf("End of file");
            break;
        }else{
            printf("Error for fRead\n");
            exit(1);
        }
       }
       if(rep =='0'){
        fseek(file,-1,SEEK_CUR);
        fwrite(&ch,1,1,file);
        fseek(file,1,SEEK_CUR);
       }


    }
    
    
    // rewind(file);
    // printf("find =%ld \n",find);
    // fseek(file,find,SEEK_SET);
    // fwrite(&ch,1,1,file);



    
    // rewind(file);
    // SHOW(file);
    // fseek(file,0,SEEK_SET);
    // fwrite(&ch,1,1,file);
    // SHOW(file);
    // // rewind(file);
    // fseek(file,-1,SEEK_END);
    // SHOW(file);
    
    // long pos= ftell(file);
    // rewind(file);
    // pos= ftell(file);
    // const char *str="hello";
    // fwrite(str,1,1,file);
    fclose(file);

    return 0;


}