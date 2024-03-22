#include <iostream>
#include <pthread.h>


/**
 * 
 *  @brief: 
 * 
 *  @notice:    pthread_create 可以使用类作为参数，调用静态函数
 *              如果一个类需要线程 需要用一个 static 类型并且返回值和参数都是void* 类型的转换函数
 *              like    :
 *                      static void* ShowWrapper(void* arg)
*/

class Foo{
    private:
        int _value;
    public:
    Foo(int vale):_value(vale){
        
    }
    ~Foo(){
        std::cout << "over down" <<std::endl;
    }
    void Show(){
        std::cout << "Value = " 
                  << _value 
                  << std::endl;
    }

    static void* ShowWrapper(void* arg) {
        Foo* foo = static_cast<Foo*>(arg);
        foo->Show();
        return NULL;
    }

    
};


int main(){
    Foo foo(12);
    pthread_t pid;

    if(pthread_create(&pid,NULL,Foo::ShowWrapper,&foo) ){
        std::cerr << "Failed to create thread" << std::endl;
        return 1;
    }
    pthread_join(pid,NULL);

    std::cout << "Done\n";

    return 0;
}


