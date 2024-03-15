#include <stdio.h>


/**
		pragma 是编译器指令，用于控制编译器的行为。

1. 控制结构体的对齐方式

	#pragma pack(n)  // n=1,2,4,8,16
		struct Foo{
		...
		}
	#pragma pack()   // 恢复默认对齐方式
	
2. 防止头文件被重复包含

	#pragma once
		#ifndef _FOO_H_
		#define _FOO_H_
		...
		#endif

3.编译器优化级别

	#pragma GCC optimize("O3")
		void my_function() {
			// 函数的内容
		}
	
	
	#pragma optimize("s",on)  // 小的优化
		...
	#pragma optimize("s",off) // 关闭小的优化
		...
	#pragma optimize("t",on)  // 时间优化
		...
	#pragma optimize("t",off) // 关闭时间优化
		...
	#pragma optimize("y",on)  // 内存优化
		...
	#pragma optimize("y",off) // 关闭内存优化
		...
	#pragma optimize("",on)   // 默认优化
		...
	#pragma optimize("",off)  // 关闭默认优化
		...


4. 控制编译器的警告信息

	#pragma warning(disable:4996)  // 禁止4996号警告
		...
	#pragma warning(default:4996)  // 恢复4996号警告

 
*/


int main(){

	return 0;
}



