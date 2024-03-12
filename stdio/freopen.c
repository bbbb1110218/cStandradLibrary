#include <stdio.h>


/**
 * @brief: freopen()	重新打开一个流	
 * 类似于unix的系统调用dup2 重定向文件描述符
 * stdout,stdin,stderr 是FILE *类型的指针
 * 
 *  extern FILE *__stdoutp;
 * 	#define	stdout	__stdoutp
 * 
*/ 


int main(){
	FILE *fp=freopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt2","w",stdout);
	if(!fp){
		perror("freopen");
		return 1;
	}
	
	printf("Hello World\n");
	fclose(fp);	
	return 0;
}
