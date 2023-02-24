#include <iostream>
#include "base.h"

class DerivedClass : public BaseClass
{
    public:

    void show_base_data(){
        cout << a << endl;
    }
};