#include <stdio.h>


int main(){
    FILE *file = fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt","r");

    char ch;
    while((ch =getc(file)) !=EOF){
        printf("%c",ch);
    }
    return 0;
}