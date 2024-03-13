
#include <stdio.h>
#include <string.h>


/**
 * 
 * 在给定的内存区域中搜索给定的字符。
 * 
 *      void	*memchr(const void *ptr, int value, size_t __n);
 * 
 * 
 * @param ptr 要搜索的内存区域的起始地址
 * @param value 要搜索的字符
 * @param num 要搜索的字节数
 * @return 如果找到字符，则返回指向该字符的指针；否则返回NULL
 */
/**
 * Searches for the first occurrence of a byte in a block of memory.
 *
 * This function searches within the first `n` bytes of the memory block pointed to by `s`
 * for the first occurrence of the byte `c`.
 *
 * @param s     Pointer to the memory block to be searched.
 * @param c     Byte to be located.
 * @param n     Number of bytes to be searched.
 *
 * @return      A pointer to the first occurrence of `c` in the memory block, or NULL if `c` is not found.
 */

/**
 * 
 * memchr 是 C 语言标准库中的一个函数，用于在一段内存区域中搜索指定的字符。
 * chr 是 character 的缩写，表示字符。在这里，chr 可以是任意一个字符，用于指定要在内存区域中搜索的字符。
*/
#pragma push(pack,1)
typedef struct Foo{
    char buff[14];
    
    size_t size;
    char s1:3;
    char s2:3;
    char s3:2;
}Foo;
#pragma pop(pack)


const char * Qmemchr(const char *res,int find,size_t max_find){
   
    const char *move=res;

    while((move-res)  < max_find-1)
    {
        if(*move == *res)
        {
            return move;
        }
        move++;
    }
    return NULL;
}


const char * buff="Hello,kitty fuck you bitch";



int main(){

  size_t n=strlen(buff);

   const char *start=Qmemchr(buff,'e',1);
   printf("result=%s",start);

   Foo foo={.buff="hello,kitty",
            .size=10,
            .s1=1,
            .s2=1,
            .s3=1};


//在结构体里面也可以找
    start=memchr(&foo,'e',foo.size);
    printf("result=%s",start);
    


   return 0;
}