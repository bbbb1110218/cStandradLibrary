#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>



/**
 * @function:   gmtime_r(const time_t *,struct tm * time)
 * @brief:		线程安全 把时间戳存储在struct tm结构体指针里面 
 * 
 * 
 * @function:		
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:	pointer to struct tm 
 * 
 * @notice:		格林时区
 * 
*/
int main(){


	time_t now =time(NULL);
	struct tm mt;

	gmtime_r(&now,&mt);
	
	printf("%s\n",asctime(&mt));









	

	return 0;
}
