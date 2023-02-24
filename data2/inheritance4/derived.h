#include <iostream>
#include "base.h"
//using namespace std;

class DerivedClass : public BaseClass
{
    protected:
    int a[my_data];
    int top;

    public:
    void push(int var){
        if(top >= my_data - 1) {
            std::cout << "Error: stack is full" << std::endl;
            exit(1);
        }
        BaseClass::push(var);
    }

    int pop(){
        if(top < 0){
            std::cout << "Error - stack is empty!" << std::endl; 
            exit(1); 
        }
        return BaseClass::pop();
    }
};