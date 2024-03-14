#include <string.h>
#include <stdio.h>
#include <stdbool.h>


/**
 *   char * strtok(char * str,const char * step);
 * 
 * 
 * strtok 是 string tokenize 的简写，这是一个 C 语言库函数，用于将字符串分解为一系列的标记。
 *  
 * @param str   要分割的字符串
 * @param step   要分割的字符  如果要分割 ",\n" 字符遇到, 或者 , \n都会替换成 ‘\0’ 
 * 
 *      
 * @brief:    按照step里面的字符分割str
 *            第一次使用的时候 strtok(Mystr,",\n")
 *            第二次使用的时候 strtok(NULL,",\n")  
 *            每次返回分歌前的第一个字符串，并且用 "\0"替换掉了已经存在Step里面的字符
 *            函数里面有静态变量，如果str 为真 ，静态变量就=str 如果str为NULL 就是用函数里面的静态变量，为上一个字符 ‘\0’ 后面的一个字符
 *            
 * 
 * @return:     
 *              会修改str 慎重使用
 *              或者拷贝一份出来
 *             
 * 

*/


bool isInStep(char ch,const char *step){
    for(int i=0;step[i];i++)
    {
        if(ch==step[i])
            return true;
    }
    return false;
}



char *Qstrtok(char *str,const char *step){
    static char *ps;
    if(str !=NULL)
    {
        ps=str;
    }else if(ps == NULL){
        return NULL;
    }

    char *first=ps;

    char *flag=first;

    while(*first && !isInStep(*first,step)){
        first++;
    }

    if(!(*first)){
        ps =NULL;
    }else{
        *first='\0';
        ps=first+1;
    }

    return flag;



}

int main() {
    
    char str[] = "abcd,efg,,fuck";
    const char *sep = " ,";


    //指针标记一下
    char *arry[20]={};
    int n=0;

    // char *token = Qstrtok(str, sep);
    char *token = Qstrtok(str, sep);
    arry[n++]=token;

    while (token != NULL) {
        printf("%s\n", token);
        token = Qstrtok(NULL, sep);
        if(token !=NULL) arry[n++]=token;
    }


	// printf("the str finally is %s\n",str);
    for(int i=0;i<n;i++){
        printf("[%d] %s",i,arry[i]);
    }

    return 0;

}
