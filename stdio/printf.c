#include <stdio.h>





int main(){

    short                   sValue=-3;                   // %hd for short
    unsigned short          usVla=4;                     // %du
    int                     iVal=-4;                    // %d for int 
                                                        // %o for 8进制
                                                        // %x for 16进制
    unsigned int            uiVal=16;                   // %u for unsigned int 
    float                   fVal=1.23432f;              // %f  
    double                  dVal=2.3564324234;          // %lf or %f 单精度
                                                        // %G or %g  双精度
    char*                   str="String Value";         // %s
    char                    chh=-125;                    // %c
    unsigned char           ch='x';                     // %c
    unsigned int *          p=&uiVal;                    // %p for 指针

    printf("int 类型 10进制 ivalue = %d\n",iVal);
    printf("int 类型 10进制 uiVal = 0X%x\n",uiVal);
    printf("int 类型 8进制  uiVal = 0 %o\n",uiVal);
    printf("float 单精度  fVal = 0 %f\n",fVal);
    printf("float 双精度  fVal = 0 %g\n",fVal);
    printf("double 单精度  dVal = %f\n",dVal);
    printf("double 科学计数法  dVal = %e\n",dVal);
    printf("double 自动用单精度或者科学计数法  dVal = %g\n",dVal);             // %g自动选择 %f or %e 科学计数量法
    printf("double 单精度  dVal = %6.3f\n",dVal);                  // %6.3f  6代表总宽度是6 如果小于6 左边填充 " " 3代表保留小数点的后面3位

    //char 是有正负的  但是%c只打印ascii字符(0*255)  如果char(-127 ~128 ) 超过了ascii表 比如 -1 就无法打印
    printf("char   chh = %c\n",(unsigned char )chh); 
    printf("unsigned char   ch = %c\n",ch); 

    printf("Pointer p   =%8.p\n",p);
     printf("Pointer p   =0x%x\n",*p);




    return 0;
}