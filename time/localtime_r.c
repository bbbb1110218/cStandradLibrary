#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>



/**
 * @function:   localtime_r(const time_t *,struct tm * time)
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
 * @notice:		本地时区
 * 
*/
int main(){


	time_t now =time(NULL);
	struct tm mt;

	localtime_r(&now,&mt);
	
	printf("localtime %s\n",asctime(&mt));




	// char *str=asctime_r(mt,(char *)malloc(102));

	// printf("asctime =%s",str);
	
	// free(str);
	







	

	return 0;
}
