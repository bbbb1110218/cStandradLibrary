

#include <stdio.h>

#include <string.h>
#include <signal.h>
#include <unistd.h>


/**
 *      size_t	 strlcpy(char *__dst, const char *__source, size_t __size);
 * 
 * 
*/
static int n=0;
void interRup(int sig){
    printf("Current Times is %d\n",n);
}

int main(){
    signal(2,interRup);
    setvbuf(stdout,NULL,_IONBF,0);
// int n=100;
while(n++ <100) 
{
    printf("Current Times is %d main func\n",n);
    sleep(10); 
 
 }

    return 0;
}