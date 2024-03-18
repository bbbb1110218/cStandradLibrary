#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

/**
 *   @func: atof(const char * str)
 *        
 *   @brief str to double
 *      
 *   @param:str 
 *   @param
 *   @param 
 * 
 *   @return 
 * 
 *   @note 
*/

double Qatof(const char * fstr){
    double flag =1.0;
    double iVal = 0;
    double fact =1.0;

    while(*fstr ==' ')
        fstr++;
    
    if(*fstr =='-')
    {
        flag =  -1.0 ; 
        fstr++; 
    }else if (*fstr == '+'){
        flag = 1.0;
        fstr++;
    }
    
    while(*fstr !='.' && *fstr){
        if(*fstr >= '0' && *fstr <='9')
            iVal =(*fstr - '0') + iVal*10;
        else
            return 0.0;
        fstr++;
    }


    if(*fstr =='.'){
        ++fstr;
        while(*fstr > '0' && *fstr <'9'){
            fact /=10;
            iVal = iVal + (*fstr -'0') * fact;
            fstr++;
        }
    }
    
    return flag * iVal;


}



int main(){
    const char * str="3432.2f56";
    printf("atof(str)= %.5f\n",atof(str));
    printf("Qatof(str)= %.5f\n",Qatof(str));
    return 0;
}