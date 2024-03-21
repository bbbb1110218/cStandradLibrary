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
 * @function:	 struct tm gmtime(时间戳)
 * 
 * @brief:		将时间戳转换为UTC时间 0时区
 * 				"GM" 是 "Greenwich Mean Time" 的缩写，中文为 "格林威治标准时间"，
 * 			    是指位于英国伦敦郊区的皇家格林威治天文台的地方时间，
 * 				因为这个天文台位于经度为0的地方，所以它的时间被作为世界的标准时间。
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
	time_t t;
	time(&t);

	struct tm *S=gmtime(&t);
	char Buff[BUFSIZ];

	sprintf(Buff,"%d-%d-%d %d:%d:%d\n", 
		S->tm_year+1900, S->tm_mon+1, S->tm_mday, 
		S->tm_hour, S->tm_min, S->tm_sec);


	puts(Buff);





	

	return 0;
}
