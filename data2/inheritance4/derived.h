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
        std::cout << "derived method call ";
        if(top >= my_data - 1) {
            std::cout << "Error: stack is full";
            exit(1);
        }
        BaseClass::push(var);
    }

    int pop(){
        std::cout << "derived method call ";
        if(top < 0){
            std::cout << "Error - stack is empty!"; 
            exit(1); 
        }
        return BaseClass::pop();
    }
};