

// Left off in Unary Operators

#include <iostream> 
#include "my_data.h"

class Int_obj_4
{
    private:
    my_data d;
    unsigned int uni;
    const int cni;
    static int sti;

    public:
    // Default Constructor
    Int_obj_4() : d{0, 0}, uni(0), cni(0) {d.si++;}
    // -- no one argument constructor
    // Constructor -- multi args
    Int_obj_4(
        unsigned int u, 
        const int c, 
        unsigned int uu, 
        const int cc
    ) : d{u, c}, uni(uu), cni(cc) {}

    // Getters
    

};

int Int_obj_4::cni = 0;

