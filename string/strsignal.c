#include<stdio.h>
#include <string.h>
#include <stdlib.h>


/**
			char	*strsignal(int __sig);
 *  @param __sig 
 *	@return  打印中断字符串

 *  @output:
		[  ] Unknown signal: 0 
		[ 1] Hangup: 1 	
		[ 2] Interrupt: 2 
		[ 3] Quit: 3 
		[ 4] Illegal instruction: 4 
		[ 5] Trace/BPT trap: 5 
		[ 6] Abort trap: 6 
		[ 7] EMT trap: 7 
		[ 8] Floating point exception: 8 
		[ 9] Killed: 9 
		[10] Bus error: 10 
		[11] Segmentation fault: 11 
		[12] Bad system call: 12 
		[13] Broken pipe: 13 
		[14] Alarm clock: 14 
		[15] Terminated: 15 
		[16] Urgent I/O condition: 16 
		[17] Suspended (signal): 17 
		[18] Suspended: 18 
		[19] Continued: 19 
		[20] Child exited: 20 
		[21] Stopped (tty input): 21 
		[22] Stopped (tty output): 22 
		[23] I/O possible: 23 
		[24] Cputime limit exceeded: 24 
		[25] Filesize limit exceeded: 25 
		[26] Virtual timer expired: 26 
		[27] Profiling timer expired: 27 
		[28] Window size changes: 28 
		[29] Information request: 29 
		[30] User defined signal 1: 30 
		[31] User defined signal 2: 31 
*/


int main()
{

	for(int i=0;i<32;i++){
		printf("[%2.d] %s \n",i,strsignal(i));
	}

	return 0;
}
