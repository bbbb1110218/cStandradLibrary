#include <stdio.h>
#include <string.h>


/**	 @function  char	*strrchr(const char *__s, int __c);
*
*	 @brief		Locate the last occurrence of a character in a string.
				查找最后一个字符出现的位置
*
*	 @param		__s	-	pointer to string to search
*	 @param		__c	-	character to locate	
*
*	 @return	char*	-	pointer to the located character in the string
*/

char	*Qstrrchr(const char *__s, int __c){
    // const char *ff=__s;
    const char *p=__s;
    while(*p){
        p++;
    }

    while(p != __s){
        if(*p==__c){
            return p;
        }
        p--;
    }

}


int main(){
    char s[20]="hello fuck you....";
    char ch='l';


    printf("%s\n",strrchr(s,ch));
    printf("%s\n",Qstrrchr(s,ch));
    return 0;

}
