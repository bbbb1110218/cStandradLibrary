#include <stdio.h>
#include <string.h>


/**
 *      
 * 
 * 
*/

size_t Qstrlen(const char *str){
    size_t n=0;
    for( ; str[n]; n++);
    return n;
}

int main(){
    char s[20]="hello";
    char s2[20]=" kitty";
    printf("%zu\n",Qstrlen(s2));

    return 0;

}