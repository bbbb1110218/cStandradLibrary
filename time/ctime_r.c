#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


/**
 * @function:   ctime_r(const time_t * pointer ,char *Buff)
 * 
 * @brief:		把时间戳 格式化 输出到Buff 里面
 * 
 * @param:  pointer   时间戳
 * @param:	Buff     
 * @param:
 * 
 * @return:
 * 
 * @notice:	函数名后缀为 "_r" 的函数通常表示这个函数是线程安全的（reentrant）。
 * "r" 是 "reentrant" 的缩写。
 * "reentrant" 是指一个函数可以在任何时候被中断，然后再次调用，而不会影响其结果的特性。这对于多线程编程非常重要，
 * 因为在多线程环境中，一个函数可能会被多个线程同时调用。
 * 
 * 
 * 
 * @output:
 * 		Buff =Thu Mar 21 15:01:52 2024
*/
int main(){
	char Buff[BUFSIZ];
	time_t now=time(NULL); 

	//不用malloc也行
	char *vBuff=ctime_r(&now,(char *)malloc(200));


//or 
	ctime_r(&now,Buff);


	printf("vBuff =%s",vBuff);

	printf(" Buff =%s",Buff);

	free(vBuff);





	

	return 0;
}
