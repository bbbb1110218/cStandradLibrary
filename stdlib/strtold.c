#include <stdio.h>
#include <stdlib.h>


/** 
 *  @function long double  strtold(char *str,char **endpointer )
 * 
 *  @brief :strtod 是 "string to double" 的缩写，意思是将字符串（string）转换为双精度浮点数（double）。这个函数用于将包含数字的字符串转换为对应的双精度浮点数值。
 *  @param str          "start with double"
 *  @param endpoiner    布可以转换成double的第一个字符地址
 *  @return :返回str是double的部分的double类型
 *  
 * 
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

long double Qstrtold(const char *str, char **end) {
    if (str == NULL) {
        return 0.0L;
    }

    long double sign = 1.0L;
    long double value = 0.0L;
    long double fraction = 0.0L;
    int exponent = 0;

    // 跳过前导空格
    while (isspace((unsigned char)*str)) {
        str++;
    }

    // 处理符号
    if (*str == '-') {
        sign = -1.0L;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // 处理整数部分
    while (isdigit((unsigned char)*str)) {
        value = value * 10.0L + (*str - '0');
        str++;
    }

    // 处理小数部分
    if (*str == '.') {
        str++;
        while (isdigit((unsigned char)*str)) {
            fraction = fraction * 10.0L + (*str - '0');
            exponent--;
            str++;
        }
    }

    // 处理科学记数法
    if (*str == 'e' || *str == 'E') {
        int e = 0;
        int sign = 1;

        str++;
        if (*str == '-') {
            sign = -1;
            str++;
        } else if (*str == '+') {
            str++;
        }

        while (isdigit((unsigned char)*str)) {
            e = e * 10 + (*str - '0');
            str++;
        }

        exponent += sign * e;
    }

    if (end != NULL) {
        *end = (char *)str;
    }

    return sign * (value + fraction * powl(10.0L, exponent));
}

int main() {
    char *str = "123.456e-7Hellokitty";
    char *endptr;

    long double value = Qstrtold(str, &endptr);

    printf("Converted value: %9.8Lf\n", value);
    printf("Remaining string: %s\n", endptr);

    return 0;
}