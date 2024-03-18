#include <stdio.h>
#include <stdlib.h>


/**
 *  @function: setenv(const char *name,const char *value,int overwrite)
 *     设置环境变量，name ,value,是否重写
 * 
 *  @function: getenv("envkey")
 *  @return value if envkey in env else null
 * 
 * 
*/


int main(){
    setenv("hostname","fuck",1);
    char *name=getenv("hostname");
    printf("name = %s",name);
    return 0;
}
