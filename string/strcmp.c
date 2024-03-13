/**
 * 比较两个字符串的大小。
 *  int strcmp(const char *str1, const char *str2);  
 * @param str1 要比较的第一个字符串
 * @param str2 要比较的第二个字符串
 * @return 如果 str1 小于 str2，则返回一个负数；如果 str1 大于 str2，则返回一个正数；如果 str1 等于 str2，则返回 0。
 */


#include <stdio.h>
#include <string.h>

int Qstrcmp(const char* str1, const char* str2){
    int res=0;
    // while(!(res=(unsigned char)*str1 - (unsigned char)*str2) && *str2){
    //     ++str1;
    //     ++str2;
    // }

    for(;!(res=(unsigned char)*str1 - (unsigned char)*str2) && *str2;++str1,++str2);
    return res;

}


int main(){
    const char *s1 = "Hello";
    const char *s2 = "hello";
    const char *s3 = "Hello World";
    const char *s4 = "xello";
    const char *s5 = "Hello";
    const char *s6 = "Hello";


    printf("strcmp(%s,%s)=%d\n",s1,s2,strcmp(s1,s2));
    printf("strcmp(%s,%s)=%d\n",s3,s1,strcmp(s3,s1));

#if 0
    if(strcmp(s1, s2) == 0)
    {
        fprintf(stdout,"%s and %s are not equal\n", s1, s2);
    }else{
        fprintf(stdout,"%s and %s are not equal\n", s1, s2);
    }


    if(strcmp(s1, s3) == 0)
    {
        fprintf(stdout,"%s and %s are  equal\n", s1, s3);
    }else{
        fprintf(stdout,"%s and %s are not equal\n", s1, s3);
    }
    fprintf(stdout,"%s Qstrcmp %s  reuslt = %d\n",s1,s4,Qstrcmp(s1,s4));
    fprintf(stdout,"%s strcmp %s  reuslt = %d\n",s1,s4,strcmp(s1,s4));
    fprintf(stdout,"%s Qstrcmp %s  reuslt = %d\n",s3,s1,Qstrcmp(s3,s1));
    fprintf(stdout,"%s Qstrcmp %s  reuslt = %d\n",s3,s1,strcmp(s1,s3));
    fprintf(stdout,"%s Qstrcmp %s  reuslt = %d\n",s1,s2,Qstrcmp(s1,s6));
    fprintf(stdout,"%s Qstrcmp %s  reuslt = %d\n",s1,s2,Qstrcmp(s1,s6));


#endif 
    return 0;
}