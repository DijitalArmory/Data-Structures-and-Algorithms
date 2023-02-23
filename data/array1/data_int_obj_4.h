#include <iostream> 
#include <limits.h>
#include "my_data.h"


class Int_obj_4
{
    private:
    my_data d;
    unsigned int uni;
    const int cni;
    static int sti;
    int arr[1];

    public:
    // Default Constructor
    Int_obj_4() : d{0, 0}, uni(0), cni(0), arr{0} {sti++;}
    // -- no one argument constructor
    // Constructor -- multi args
    Int_obj_4(
        unsigned int u, 
        const int c, 
        unsigned int uu, 
        const int cc
    ) : d{u, c}, uni(uu), cni(cc), arr{0} {}

    // Getters
    unsigned int get_ui(){return d.ui;}
    int get_ci(){return d.ci;}
    int get_cni(){return cni;}
    int get_sti(){return sti;} // static member

    // Showers
    void show_ui(){std::cout << d.ui << std::endl;}
    void show_ci(){std::cout << d.ci << std::endl;}
    void show_cni(){std::cout << cni << std::endl;}
    void show_uni(){std::cout << uni << std::endl;}
    void show_sti(){std::cout << sti << std::endl;}

    void show_arr();
};

// initialize the static var
int Int_obj_4::sti = 0;

void Int_obj_4::show_arr(){
    for (int i = 0; i <= sizeof(arr); i++){
        std::cout << i << std::endl;
    }
}

