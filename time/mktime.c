#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function: time_t mktime(struct tm *) ;
 * 
 * @brief:		把struct tm的时间转换成time_t （long） 类型
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

	time_t timeS=time(NULL);

	printf("现在的时间戳是%ld\n",timeS);

	struct tm *pt=localtime(&timeS);

	pt->tm_mday--;

	time_t yearAgo=mktime(pt);
	printf(" 昨天时间戳是%ld\n",yearAgo);

	





	

	return 0;
}
