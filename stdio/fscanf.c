#include <stdio.h>
#include <string.h>
/** 
 * @brief: fscanf 从文件中读取格式化输入
 *      fscanf(FP,"format",&var1,&var2);
*/



int main(){
    char ch1[1024],ch2[1024];
    bzero(ch1,1024);
    bzero(ch2,1024);
	FILE *fp=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","r");

    if(!fp){
        perror("freopen");
        return 1;
    }

    fscanf(fp,"%s\n%s",ch1,ch2);

    printf("ch1=%s,ch2=%s\n",ch1,ch2);
    fclose(fp);
    return 0;

}