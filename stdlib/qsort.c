
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#if 1




void mySwap(void *pa,void *pb,size_t n){
    char tmp[n];
    memcpy(tmp,pa,n);
    memcpy(pa,pb,n);
    memcpy(pb,tmp,n);
}


int Qqsort(void *base,size_t itemCount,size_t itemLong,int( *com)(const void *a,const void *)){

    void *max= (void *) base + (itemCount * itemLong);

    void *start=base;
    void *move;

    while(start < (max - itemLong)){
        move = start + itemLong;
        while(move <= (max - itemLong)){
            if(com(start,move)>0)
                mySwap(start,move,itemLong);
            move +=itemLong;

        }
        start+=itemLong;
    }

}

int Mysort(const void*a,const void *b){
    return *(int *)a - *(int *)b;
}


int main(){

    int arr[]={8,55,-64,5,9,2,3,6,7,10,1,-1};
    Qqsort(arr,sizeof(arr)/sizeof(*arr),sizeof(*arr),Mysort);

    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++){
        printf("%d ",arr[i]);
    }
    return 0;
}













#else 



int Mysort(const void*a,const void *b){
    return *(int *)a -*(int *)b;
}

int Mysort2(const void*a,const void *b){
    return *(int *)b -*(int *)a;
}


int main(){

    int arr[]={8,55,-64,5,9,2,3,6,7,10,1,-1};
    qsort(arr,sizeof(arr)/sizeof(*arr),sizeof(*arr),Mysort);

    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

#endif