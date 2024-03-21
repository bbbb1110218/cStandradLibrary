#include <stdio.h>
#include <string.h>
#include <time.h>


	// struct tm {
	// 	int	tm_sec;		/* seconds after the minute [0-60] */
	// 	int	tm_min;		/* minutes after the hour [0-59] */
	// 	int	tm_hour;	/* hours since midnight [0-23] */
	// 	int	tm_mday;	/* day of the month [1-31] */
	// 	int	tm_mon;		/* months since January [0-11] */
	// 	int	tm_year;	/* years since 1900 */
	// 	int	tm_wday;	/* days since Sunday [0-6] */
	// 	int	tm_yday;	/* days since January 1 [0-365] */
	// 	int	tm_isdst;	/* Daylight Savings Time flag */
	// 	long	tm_gmtoff;	/* offset from UTC in seconds */
	// 	char	*tm_zone;	/* timezone abbreviation */
	// };

/**
 * @function:	 struct tm *localtime(const time_t *);
 * 
 * @brief:		把 time(NULL) 时间戳 转换成 stuct tm 格式里面
 * 				
 * 
 * @struct:	
 * 
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:		struct tm 的结构体指针
 * 
 * @notice:		gmtime是返回的UTC时间，而localtime是返回的本地时间
 * 				
*/
int main(){


	time_t t=time(NULL);

	struct tm *time=localtime(&t);

	printf("Current time: %d-%d-%d %d:%d:%d\n",
		time->tm_year+1990,
		time->tm_mon,
		time->tm_mday,
		time->tm_hour,
		time->tm_min,
		time->tm_sec);

	printf("结构体有一个tm_gmtoff成员,表示本地时间与UTC时间的差值,该值为:%ld\n",time->tm_gmtoff/3600);
	printf("结构体有一个tm_zone成员,表示时区,该值为:%s\n",time->tm_zone);


	

	

	return 0;
}
