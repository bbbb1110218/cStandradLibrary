#include <stdio.h>
#include <unistd.h>


/**   	setlinebuf(FILE *)
 * 		@brief:设置文件流为换行设置行缓冲
 * 			   遇到换行了才刷新
 * 
 * 
*/

int main(){
	setlinebuf(stdout);
	printf("Hello, ");
	sleep(1);
	printf("world!");
	sleep(1);
	printf("\n");
	return 0;
}
