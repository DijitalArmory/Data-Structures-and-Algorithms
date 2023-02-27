#include <iostream>
using namespace std;

class This1
{
    private:
    int data;

    public:
    This1() : data(8) {}
    This1(int d) : data(d) {}

    void show_data(){
        cout << this->data << endl;
    }

    void reveal(){
        cout << "The address of my object is " << this << endl;
    }
};

/*

in main()...
    This1 obj1;
    obj1.reveal();

    This1 obj2;
    obj2.reveal();
*/