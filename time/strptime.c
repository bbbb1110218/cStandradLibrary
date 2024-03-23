#include <stdio.h>
#include <string.h>
#include <time.h>


#define GET_CURRENT_TIMES time(NULL)



/**
 * @function:        char* strptime(const char* Buff, const char* Format, struct tm* tm);

 * @brief 将字符串解析为时间   
            timestr to struct tm 

 * @param Buff 包含日期和时间信息的字符串


 * @param Format 用于解析 Buff 的格式字符串
 
 * @param tm 用于存储解析结果的 struct tm
 
 * @return 如果成功，返回 Buff 中剩余的字符，如果 Buff 已经被完全解析，返回 NULL
 * 
 * @details

    * strptime 函数根据 Format 字符串指定的格式，解析 Buff 字符串中的日期和时间信息，
    * 并将解析结果存储在 tm 结构中。Format 可以包含多种格式指定符，例如 %Y 表示年份，
    * %m 表示月份，%d 表示日期，%H 表示小时，%M 表示分钟，%S 表示秒。如果 Buff 中的字符
    * 不能被 Format 完全解析，strptime 会返回 Buff 中剩余的字符。
 */
int main(){

    char Buff[BUFSIZ]="2022 12 2 16 36 36";
    char *Format="%Y %m %d %H %M %S";
    struct tm tm;
    strptime(Buff,Format,&tm);

    // printf("time from Buff :%s",asctime(&tm));


    time_t timeT=mktime(&tm);
    char timeStr[BUFSIZ];

    for(int i=0;i<30;i++){
        printf("增加1天1小时1分钟1秒 :");
        timeT=timeT + (1 * (60*60*24)) + (60 * 60) + 60 +  1;
        struct tm * tm2=localtime(&timeT);
        strftime(timeStr,BUFSIZ-1,"%Y-%m-%d %H:%M:%S\n",tm2);
        puts(timeStr);

    }
 


	

	return 0;
}
