#include <iostream>
using namespace std;

class Asnoverload
{
    private:
    int data;

    public:
    Asnoverload(){}
    Asnoverload(int d){data = d;}

    void display();
    Asnoverload operator =(Asnoverload& a);
}; 

void Asnoverload::display(){
    cout << data << endl;
}

Asnoverload Asnoverload::operator =(Asnoverload& a){
    data = a.data;
    cout << "Assignment operator invoked" << endl;
    return Asnoverload(data);
}

/*
in main()...
    Asnoverload a1(37);
    Asnoverload a2;

    a2 = a1; // invoke ooverloading   
    Asnoverload a3 = a2; // does NOT invoke overloading

    cout << "Displaying a3" << endl;
    a3.display();
*/