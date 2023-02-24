#include <iostream>
#include "my_data.h"
using namespace std;

class BaseClass
{
    protected:
    int a[my_data];
    int top;

    public:
    BaseClass(){ top = -1; }

    void push(int var){a[++top] = var;}
    int pop(){return a[top--];}

};