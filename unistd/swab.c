#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 *   @func:     void swab((const void *src, void *dest, int nbytes);
 *        
 *   @brief    每两个字节交换 比如
 *                  0x12345678
 *          会变成   0x34127856
 * 
 *                  "Hello"
 *          会变成   "eHll"
 *      
 *   @param
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/

void my_swab(const void *src, void *dest, int nbytes) {
    const char *src_ptr = (const char *)src;
    char *dest_ptr = (char *)dest;

    for (int i = 0; i < nbytes; i += 2) {
        dest_ptr[i] = src_ptr[i + 1];
        dest_ptr[i + 1] = src_ptr[i];
    }
}

int main(){
    // char src[] = "1234";
    // char dest[5];
    // swab(src, dest, 4);
    // printf("%s\n",dest);

    int a = 0x12345678;
    int b;
    swab(&a,&b,4);

    printf("b = %0X\n",b);


    char *str1="Hello";
    char str2[20];
    bzero(str2,20);
    swab(str1,str2,strlen(str1));

    printf("str2 =%s\n",str2);


    return 0;
}