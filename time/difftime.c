#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function:		difftime(time_t tim1,time_t tim2);
 * 
 * @brief:			返回tim1 - tim2 的 秒
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


	time_t now= time(NULL);

	struct tm tim2;

	localtime_r(&now,&tim2);  //time_t  to  struct tm

	


	//更改年份
	//tm_year 以为1900年开始计算 所以减1900										
	tim2.tm_year=	2002-1900;
	tim2.tm_mon=	5;
	tim2.tm_mday=	2;

//struct tm to time_t 
	time_t birth=mktime(&tim2);

	double secs = difftime(birth,now);

	int day = secs/(60 *60 *24);


	day = day > 0 ?day:0-day;


	printf("the child living on the earth for  %d days \n",day);










	return 0;
}
