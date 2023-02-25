#ifndef BASE_h
#define BASE_H

class BaseClass
{
    public:
    virtual void show() = 0; // pure virtual function
};

#endif

/*

in main()...

// BaseClass error; // not allowed

        because the following virtual functions are pure within ‘BaseClass’
    
    BaseClass* arr[3]; // array of pointers to base class
    Derived1 d1;
    Derived2 d2;

    arr[0] = &d1;
    arr[1] = &d2;

    arr[0]->show();
    arr[1]->show();

*/