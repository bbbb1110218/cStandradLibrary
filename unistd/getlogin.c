#include <stdio.h>
#include <unistd.h>

/**
 *  @function: getlogin()

 @return:当前登录的用户名
 
 */
int main(){

	printf("Current login name: %s\n", getlogin());
	return 0;
}
