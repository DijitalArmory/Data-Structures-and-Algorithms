#include <iostream>
using namespace std;

class This2
{
    private:
    int data;

    public:
    This2() : data(0) {}
    This2(int d) : data(d) {}

    void reveal(){
        cout << data << endl;
    }

    This2& operator =(This2& o){
        data = o.data;
        cout << "Assignment operator invoked" << endl;
        return *this;
    }
};