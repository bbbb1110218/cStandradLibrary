#include <stdio.h>
#include <stdlib.h>


/** 
 *  @function int   strtoi(char *str,char **endpointer )
 * 
 *  @brief :strtoi 是 "string to int" 的缩写，
 *  @param str          "start with double"
 *  @param endpoiner    不可以转换成int的第一个字符地址
 *  @return :返回str是int的部分的int类型
 *  
 * 
*/


int Qstrtoi(const char *str,char **end){
   int x=1;
   int val=0;
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
    *end=move;
    


    
    return x*val;



}





int main() {
    const char *str = "+33.323d";
    char *endptr;

    int value = Qstrtoi(str, &endptr);

    printf("Converted value: %d\n", value);
    printf("Remaining string:%s\n", endptr);

    return 0;
}
