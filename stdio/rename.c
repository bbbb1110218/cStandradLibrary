#include <stdio.h>

const char *filename="/Users/min122218/Downloads/tmp.c";
const char *filename2="/Users/min122218/Downloads/tmp2.c";

int main(){

    FILE *file=fopen(filename,"w");
    fwrite("fuck",5,1,file);
    fclose(file);

    rename(filename,filename2);  
    return 0;
}