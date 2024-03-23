#include <stdio.h>
#include <string.h>
#include <time.h>


#define GET_CURRENT_TIMES time(NULL)



/**
 * @function:       size_t 
 *                  strftime(char * buff,     
 *                           size_t max, 
 *                           const char * fotmat, 
 *                           const struct tm * tm
 *                          ) ;
 * @brief: struct tm  to string of time
 * @brief:  strftime 
 *          Str format time  "将时间格式化为字符串"
 * 
 * @param:  buff 指向用于存储结果字符串的缓冲区的指针。
 * @param:  max  缓冲区的大小
 * @param:  forma 一个格式字符串，定义了日期和时间的格式。
 *          %Y-%m-%d %H:%M:%S
 *          %Y year
 *          %m month
 *          %d day  
 *          %H Hour
 *          %M Minute
 *          %S Seconds
 * @param:
 * @return:
 * 
 * @notice:
 * 
*/
int main(){
    const char *format="%Y-%m-%d %H:%M:%S";
    const char *format2="%H:%M:%S";
    time_t tim=GET_CURRENT_TIMES;
    struct tm *stm=localtime(&tim);
    char Buff[BUFSIZ];

    strftime(Buff,BUFSIZ,format,stm);
    puts(Buff);
        strftime(Buff,BUFSIZ,format2,stm);
    puts(Buff);





	

	return 0;
}
