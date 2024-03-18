#include <stdio.h>
#include <stdlib.h>


/** 
 *  @function long   strtol(char *str,char **endpointer,int base )
 * 
 *  @brief :strtoi 是 "string to long" 的缩写，
 *  @param str          "start with long"
 *  @param endpoiner    不可以转换成long的第一个字符地址
 *  @return :返回str是long的部分的long类型
 *  
 * 
*/

/**TODO::没有处理base strtol有基数 base base是字符串是什么进制的*/
long Qstrtol(const char *str,char **end){
   long x=1;
   long val=0;
   const char *move=str;
   while(*move ==' ')
   {
    move++;
   }

   if(*move =='-'){
    x=0-x;
    move++;
   }else if(*move =='+'){
    move++;
   }

    while((*move >= '0') && (*move <='9')){
        val = (*move -'0') + val *10;
        move++;
    }

    *end=(char *)move;
    


    
    return x*val;



}





int main() {
    char *endptr;
    const char *str0 = "1012345哈哈哈我是str1后面的字符";
    long value0 = strtol(str0, &endptr, 2);
    printf("Converted value (base 10): %ld, Remaining string: %s\n", value0, endptr);

    // 解析十进制数
    const char *str1 = "12345哈哈哈我是str1后面的字符";
    long value1 = strtol(str1, &endptr, 10);
    printf("Converted value (base 10): %ld, Remaining string: %s\n", value1, endptr);

    // 解析十六进制数
    const char *str2 = "0x1A3F哈哈哈我是str1后面的字符";
    long value2 = strtol(str2, &endptr, 16);
    printf("Converted value (base 16): %ld, Remaining string: %s\n", value2, endptr);

    // 解析八进制数
    const char *str3 = "0755哈哈哈我是str1后面的字符";
    long value3 = strtol(str3, &endptr, 8);
    printf("Converted value (base 8): %ld, Remaining string: %s\n", value3, endptr);

    // 自动确定基数
    const char *str4 = "1234哈哈哈我是str1后面的字符";
    long value4 = strtol(str4, &endptr, 0);
    printf("Converted value (auto): %ld, Remaining string: %s\n", value4, endptr);


    return 0;
}
