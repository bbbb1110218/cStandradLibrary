#include <stdio.h>
#include <unistd.h>


/**
 *   @func:  _exit(int ExitCode)
 *        
 *   @brief  不清理资源(关闭文件描述符等)退出状态码
 *      
 *   @param exitCode return it to operator system 
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note exit 和 _exit 都是 C 语言库函数，用于终止进程。但是，它们在细节上有一些不同。
 *   
 *    exit：这个函数在终止进程之前会先清理一些资源。例如，它会关闭所有打开的文件描述符，
 *              删除临时文件，调用注册的 atexit 函数等。然后，它会向操作系统返回一个退出状态。
 * 
 *   _exit：这个函数会立即终止进程，不进行任何清理。它也会向操作系统返回一个退出状态，
 *          但是不会关闭文件描述符，不会删除临时文件，也不会调用 atexit 函数。在大多数情况下，
 *          你应该使用 exit，因为它会确保你的程序的资源得到正确的清理。但是，在一些特殊情况下，
 *          你可能需要使用 _exit。例如，如果你在一个子进程中，你可能不想关闭父进程还需要的文件描述符，
 *          或者你可能不想调用父进程注册的 atexit 函数。在这些情况下，你可以使用 _exit。
*/


int main(){
    _exit(127);
    return 0;
}