

#include <stdio.h>
#include <setjmp.h>

/**
 * @function: 白
 * 
 * @brief:
 * 
 * @param:
 * @param:
 * @param:
 * 
 * @return:
 * 
 * @notice:
 * 
*/

//todo:: 没明白
jmp_buf env;

void foo() {
    printf("Inside foo()\n");
    printf("Error coding\n");
    fflush(stdout);

    longjmp(env, 1);
    printf("This line will never be printed\n");
}

int main() {
    if (setjmp(env) == 0) {
        printf("Calling foo()\n");
        foo();
    } else {
        printf("Back in main()\n");
    }

    return 0;
}

// 这段代码是 setjmp 和 longjmp 函数的使用示例，这两个函数用于实现 C 语言中的非本地跳转。

// jmp_buf 是一个类型，env 是这个类型的一个实例，它用于存储 setjmp 和 longjmp 函数需要的信息。

// foo 函数中的 longjmp(env, 1); 语句会导致程序跳转到最近一次对 setjmp(env) 的调用处，并使 setjmp 函数返回 1（这是 longjmp 的第二个参数）。这个跳转会忽略函数调用栈，直接跳转到 setjmp 所在的位置。

// 因此，printf("This line will never be printed\n"); 这行代码永远不会被执行，因为它在 longjmp 调用之后。

// 这种跳转方式在处理错误、异常或者进行某些类型的控制流转换时可能会很有用。但是，使用 setjmp 和 longjmp 需要谨慎，因为它们会跳过正常的函数调用和返回机制，可能会导致资源泄露或者其他问题。