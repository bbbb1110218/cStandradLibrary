#include <stdio.h>
#include <string.h>
#include <time.h>


/**
 * @function:	char *ctime(const time_t *t)
 * 				asci time ?
 * 
 * @brief:	将 `t` 指向的时间转换为一个字符串，这个字符串包含了日期和时间的信息。这个函数返回的字符串是静态分配的，所以你不需要（也不能）释放它。
 * 
 * @param:  t 指向一个时间戳的指针
 * @param:
 * @param:
 * 
 * @return: string of time
 * 
 * @notice:
 * 
*/
int main(){
	time_t t;
	time(&t);

	char *timeStr=ctime(&t);

	printf("string of time  = %s\n", timeStr);

	return 0;
}
