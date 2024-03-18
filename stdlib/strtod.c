#include <stdio.h>
#include <stdlib.h>


/** 
 *  @function double   strtod(char *str,char **endpointer )
 * 
 *  @brief :strtod 是 "string to double" 的缩写，意思是将字符串（string）转换为双精度浮点数（double）。这个函数用于将包含数字的字符串转换为对应的双精度浮点数值。
 *  @param str          "start with double"
 *  @param endpoiner    布可以转换成double的第一个字符地址
 *  @return :返回str是double的部分的double类型
 *  
 * 
*/


double Qstrtod(const char *str,char **end){
    double x=1.0;
    double val=0.0;
    double flag=1.0;

    const char *move=str;
    while(*move ==' ') move++;
    
    if(*move =='-'){
        x =0-x;
        move++;
    }else if(*move =='+'){
        move++;
    }

    while(*move >='0' &&  *move <= '9'){
        val =val*10 + (*move -'0');
        move++;
    }
    if(*move =='.'){
        move++;
        while(*move >='0' && *move <='9'){
            flag /=10;
            val = val + (*move - '0')*flag;
            move++;
        }
      
    }
    *end =(char *)move;
    
    return x*val;



}





int main() {
    const char *str = "3d";
    char *endptr;

    double value = Qstrtod(str, &endptr);

    printf("Converted value: %f\n", value);
    printf("Remaining string: %s\n", endptr);

    return 0;
}
