#include<stdio.h>
#include<string.h> // Add missing include statement



#define buffSize 1024
char Buff[buffSize];

/**
 *          fgets(buff,Max_BuffSize,fp)
 *
 *     @brief: 遇到 "\n"   之后的字符变为'\0'
 *
 *     @    输入hello\n  返回值为hello\n\0
 *
 *     @brief :
 *
 * */

void ShowStr(const char *str){
    const char*p=str;
    while(*p){
        printf("0x%x ",(unsigned char )*p);
        p++;
    }
    putchar(10);

}

int main(){
    

    int iVal=5;

    //int to string
    sprintf(Buff, "Fuck you bitch %d", iVal);
 

    fputs(Buff,stdout);

    fprintf(stdout,"请输入:");
    char *tmp;

    while(tmp = fgets(Buff,1024,stdin)) /**最大20个字符 如果不满 自动加入换行*/
    {
        printf("tmp = %s\n",tmp);
        ShowStr(Buff);
//        printf("%s",Buff);
    }
    
    printf("Buff =%s@",Buff);
    char *p=Buff;
    while(*p !='\n')p++;
    *p='\0';
    printf("Buff =%s@",Buff);

    return 0;
}