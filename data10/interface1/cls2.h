#include <iostream>

using namespace std;



class Cls2 : Base
{
    protected: 
    struct connector: public Intr { virtual void connect() override {
        cout << "Connected 2" << endl;
    } };
    connector b;

    public:
    Intr& get_connector() { return b; }
};