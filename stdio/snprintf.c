#include <stdio.h>
#include <string.h>



/**
 * @brief: snprintf(des,max_size,"format",...)
*/

typedef struct Foo{
    char *buff;
    size_t size;
}Foo;


char Buff[1023];
int main(){
    Foo foo={.buff="hello kitty",.size=5};


    snprintf(Buff,foo.size*20,"%s %s",foo.buff,"endof");

    printf("%s",Buff);
}