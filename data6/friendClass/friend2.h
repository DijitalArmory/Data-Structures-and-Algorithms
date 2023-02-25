#include <iostream>
using namespace std;



class Friend2
{

    public:
    void func1(Friend1);
};

void Friend2::func1(Friend1 f){
    cout << f.data1 << endl;
}