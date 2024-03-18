#include <stdio.h>
#include <stdlib.h>



/**
 * 
 * @function : void	*bsearch(const void *__key, const void *__base, size_t __nel,size_t __width, int (* _Nonnull __compar)(const void *, const void *));
 *                                      key,    search what,            size,       sizeof item         func
 * bsearch 是 C 语言标准库中的一个函数，用于在已排序的数组中进行二分查找。它并不是在二进制中搜索，而是使用二分查找算法在数组中查找元素。
 * 
 * 
 * @notice :数组要求是拍好序列的
 *          从小到大 比较函数是第一个减去第二个
 *          从大到小 比较函数是参数第二个减去第一个
*/

//从小到大
int mycompare(const void *a,const void *b){
    return  *(int*)b - *(int*)a;
}

//从大到小
int sortCompare(const void *a,const void *b){
    return *(int *)b - *(int*)a;
}




typedef struct Foo{
    char *buf;
    int n;
}Foo;


//比较函数
int structCompare(const void *a,const void *b){
    Foo *fa=(Foo *)a;
    Foo *fb=(Foo *)b;
    return fa->n - fb->n;

}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    // int arr[]={1,2,3,4,5,8,9};
    int value=5;
    int *se;
    se=(int *)bsearch(&value,arr,sizeof(arr)/sizeof(int),sizeof(int),mycompare);
    
    if(se !=NULL)
        printf("find the result = %d",*se);
    else
        printf("Can't find result");


    Foo stuFoo[]={
        {"hello",1},
        {"fuck",2},
        {"kitty",3}
    };

    Foo needFind={"temp",2};

    Foo *isFind=bsearch(&needFind,stuFoo,sizeof(stuFoo)/sizeof(*stuFoo),sizeof(*stuFoo),structCompare);

    if(isFind !=NULL)
        printf("find the result = %s",isFind->buf);
    else
        printf("Can't find result");
    

    return 0;
}