#include <stdio.h>
#include <string.h>


/**     str collation  字符串整理
 *      int strcoll(const char *__s1, const char *__s2);
 *      
 * @brief:比较两个字符串是否完全一样 空字符也不行
 *         
 * @return: 不一样的字符 剪掉
*/

int Qstrcoll(const char*str1,const char* str2){
    const char *p1=str1;
    const char *p2=str2;
    int result=0;
    while(*p1 && *p2 && (result =((unsigned char )*p1 - (unsigned char)*p2)) ==0)
    {
       
        p1++;p2++;
    }
    if(!(*p2) ||!(*p1))
        return *p1 ? (*p1):( 0-*p2);

    return result;



}


int main(){
    const char *p1="oello  ";
    const char *p2="hello ";

    int result=Qstrcoll(p1,p2);
    printf("%d\n",result);
    result=strcoll(p1,p1);
    printf("%d\n",result);
        result=strcoll(p1,p2);
    printf("%d\n",result);

}
