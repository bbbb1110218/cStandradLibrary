#include<stdio.h>
#include<string.h> // Add missing include statement



#define buffSize 1024
char Buff[buffSize];
int main(){
    

    int iVal=5;

    //int to string
    sprintf(Buff, "Fuck you bitch %d", iVal);
 

    fputs(Buff,stdout);

    fprintf(stdout,"请输入:");
    fgets(Buff,20,stdin);  /**最大20个字符 如果不满 自动加入换行*/
    
    printf("Buff =%s@",Buff);
    char *p=Buff;
    while(*p !='\n')p++;
    *p='\0';
    printf("Buff =%s@",Buff);

    return 0;
}