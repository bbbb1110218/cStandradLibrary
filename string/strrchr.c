#include <stdio.h>
#include <string.h>


/**     char	*strrchr(const char *__s, int __c);
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