#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function:		char *asctime(const struct tm *timeptr)
 * 
 * @brief:		time.h头文件asctime函数有什么用
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:
 * 
 * @notice:
 * 
*/
int main(){

	time_t tim=time(NULL);
	struct tm *timS=localtime(&tim);
	char* timStr=asctime(timS);
	printf("Current time : %s",timStr);



	// puts(timeStr);



	

	return 0;
}
