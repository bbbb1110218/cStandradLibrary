
#include <locale.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>
#include <monetary.h>
#include <stdio.h>

/**
 <locale.h> 是 C 语言的一个库文件，它包含了一些宏定义和函数，用于处理程序运行环境中的特定地区设置，如日期格式、货币符号、数字和字符的分类等。例如，它可以用于改变字符串排序的方式，或者改变日期和时间的显示格式等。
 */

/**
  @brief setlocale() 函数用于设置程序运行环境的特定地区设置。
  @output
		当前日期和时间: 四  3/14 11:01:39 2024
		Formatted number: 1234567
		Formatted monetary value: $1,234.56
 
 */


int main() {
    setlocale(LC_TIME, "zh_CN.UTF-8"); // 设置区域为中国

    time_t t = time(NULL);
    char buf1[80];

    strftime(buf1, sizeof(buf1), "%c", localtime(&t));

    printf("当前日期和时间: %s\n", buf1);


    setlocale(LC_NUMERIC, "de_DE"); // 设置区域为德国
    printf("Formatted number: %'d\n", 1234567);

   setlocale(LC_MONETARY, "en_US.UTF-8"); // 设置区域为美国
	

    char buf2[50];
    strfmon(buf2, sizeof(buf2), "%n", 1234.56);

    printf("Formatted monetary value: %s\n", buf2);



    return 0;
}
