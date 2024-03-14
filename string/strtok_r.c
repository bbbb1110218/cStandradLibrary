/**
 * @brief Splits a string into tokens based on a delimiter, while maintaining thread safety.
 *
 * The `strtok_r` function is used to split a string into tokens based on a specified delimiter.
 * Unlike the standard `strtok` function, `strtok_r` is thread-safe because it uses a reentrant
 * version of the function.
 *
 * @param str The string to be tokenized.
 * @param delim The delimiter character used to split the string.
 * @param saveptr A pointer to a `char*` variable that is used internally by `strtok_r` to maintain
 *                the position of the next token. This pointer should be initialized to `NULL` before
 *                the first call to `strtok_r`.
 *
 * @return A pointer to the next token in the string, or `NULL` if there are no more tokens.
 *
 * @note The original string is modified by inserting null characters ('\0') in place of the delimiter
 *       characters. The caller should make a copy of the original string if it needs to be preserved.
 * @note This function is reentrant and can be safely used in multi-threaded applications.
 */
#include <stdio.h>
#include <string.h>


/*
 *  char	*strtok_r(char *__str, const char *__sep, char **__lasts);
 *
 *    str =  abcdef , hello
 *
 *    strtok_r(str,",",lastPointer)
 *      lastPointer 指向分隔符的后面 住
 *
 * */




int main(){
    char buff[10230]= "Redistributions of source  code must retain the above copyright notice, this list of EOF conditions and the following disclaimer.";

    char * end=NULL;
    char *find=" ";

char *tmp= strtok_r(buff,find,&end);
    while(tmp){


        printf("%s\n",tmp);
        tmp=strtok_r(end,find,&end);
};

    return 0;
}