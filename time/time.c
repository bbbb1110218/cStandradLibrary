#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function:		time_t time(time_t *t)
 * 
 * @brief:		获取当前的时间戳,返回给函数，如果参数不为NULL，也将时间戳存储到参数中
 * 				从1970年1月1日0时0分0秒到现在的秒数
 * 		
 * 				- time_t *t: 用于存储时间戳的变量 实际为unsigned long 
 * 
 * @param:		t 用于存储时间戳的变量 
 * @param:
 * @param:
 * 
 * @return:		返回当前的时间戳 
 * 
 * @notice:
 * 
*/
int main(){
	time_t t;
	time_t tp=time(&t);  //获取当前时间戳 可以返回给函数，也可以存储到参数中
	printf("time: %ld\n", tp - 1700000000LU);
	printf("time: %ld\n", t);

	printf("头文件有一些全局变量,如timezone, daylight, tzname, tzset等\n");
	printf("CLOCKS_PER_SEC 每秒 %ld 个时钟滴答\n", CLOCKS_PER_SEC);
	printf("timezone: %ld\n", timezone);
	printf("daylight: %d\n", daylight);
	




	

	return 0;
}
