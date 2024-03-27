#include <stdio.h>
#include <unistd.h>


/**
 *   @func: char *getpass(const char *prompt);
 *        
 *   @brief getpass 函数用于安全地从终端读取密码。它会关闭回显，以防止密码被其他人看到。
 *          getpass 函数返回的字符串存储在静态内存区域。这意味着，每次调用 getpass 函数时，
 *          都会返回指向同一内存区域的指针。因此，如果你在调用 getpass 函数后再次调用 getpass 函数
 *          ，或者调用其他可能覆盖该内存区域的函数，那么原来的密码可能会被覆盖。
 *      
 *   @param  
 *   @param  prompt 提示
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/


int main() {
    char *password = getpass("Enter password: ");
    printf("You entered: %s\n", password);
    return 0;
}