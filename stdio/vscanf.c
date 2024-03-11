#include <stdio.h>
#include <stdarg.h>

/**
 * @brief:从标准输入流 格式化存储到可变参数的变量中
 *  V开始的函数都是 va_list  参数 ....的函数
 *  va_list 是 va_start(ap,first param) 之后的可变参数指针
 * 
*/


void MyVscanf(const char * format,...){
    va_list arg;
    va_start(arg,format);
    vscanf(format,arg);
    va_end(arg);
}



int main(){
    char name[120];
    int age;
    printf("Please enter your name and your age:\n");
    MyVscanf("%s\n%d",name,&age);
    fprintf(stdout,"Name :%s age %d",name,age);
    return 0;
}


















#if 0


void myvscanf(const char *format,...){
    va_list ap;
    va_start(ap,format);
    vscanf(format,ap);
    va_end(ap);

}





int main(){
    int age;
    char name[200];
    printf("please enter your name and age\n");
    printf("Like <xigua 23>\n:");


    myvscanf("%s %d",name,&age);

    printf("Your name is %s\n",name);
    printf("Your age is %d\n",age);
    return 0;
}

#endif