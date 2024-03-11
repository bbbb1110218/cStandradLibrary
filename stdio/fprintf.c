#include<stdio.h>
#include<string.h> // Add missing include statement

/**
 * @brief:
 * 
*/

#define buffSize 1024
char Buff[buffSize];
int main(){
    FILE *fp=fopen("/Users/min122218/Documents/GitHub/cStandLib/stdio/deleteMe.txt", "a+"); 

    int iVal=5;

    //int to string
    sprintf(Buff, "%d", iVal);
    fwrite(Buff, 1, strlen(Buff), fp);
    fclose(fp);



    return 0;
}