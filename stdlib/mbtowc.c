#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>


/**
 * @function: int	 mbtowc(wchar_t * ptr, const char * str, size_t n);
 * 
 * @param: ptr pointer to wchar_t
 * @param: str 先用mblen(str,MB_CUR_MAX) 判断一下是不是宽字符,宽字符的返回字节数量不是1
 * @param: n  mblen(str,MB_CUR_MAX) 的返回值 不是1
 * 
 * @notice: 需要包含<locale.h>文件并且设置 setlocale(LC_ALL,"");只是宽字符
 *          需要提前判断是不是宽字符 宽字符的返回值不是1 mblen(str,MB_CUR_MAX);MB_CUR_MAX是一个宏 代表最大的字节数
*/

#ifndef STR 
    #define STR "My Name is 西瓜"
#endif 

int main(){
    setlocale(LC_ALL,"");           // 设置本地化环境，以支持宽字符
    const char *str=STR;
    char *ptr=(char *)malloc(strlen(str)+1);
    if(ptr ==NULL){
        return 1;
    }
    memset(ptr,0,strlen(str)+1);
    memcpy(ptr,str,strlen(str));

    wchar_t wideChar;                   //声明一个宽字符

    char *p=ptr;
    int ret;
    while(*p){
        int len=mblen(p,MB_CUR_MAX);   //判断是不是宽字符 宽字符的返回值不是1

        switch(len){
            case 2:
            case 3:
            case 4:
                ret=mbtowc(&wideChar,p,len);                    //转换成宽字符 并且返回字节数
                if(iswprint(wideChar) && !iswcntrl(wideChar)){   //判断是不是可打印字符 和 不是控制字符
                    wprintf(L"%lc ret=%d\n",wideChar,ret);      //打印宽字符 和占用字节数
                }
                p +=ret;
                break;

            default:
                p++;
                break;
        }
    }

    return 0;
}