#include <iostream>
#include "intr.h"
using namespace std;

#include "base.h"

class Cls1 : Base
{
    protected: 
    struct connector: public Intr { virtual void connect() override {
        cout << "Connected 1" << endl;
    } };
    connector b;

    public:
    Intr& get_connector() { return b; }
};
