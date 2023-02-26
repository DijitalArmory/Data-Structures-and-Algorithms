#include <iostream>
using namespace std;

class Sfunc1
{
    private:
    static int total;
    int id;

    public:
    Sfunc1(){
        total++;
        id = total;
    }

    ~Sfunc1(){
        total--;
        cout << "Destroting id # " << id << endl;
    }

    static void show_total(); // static function
    void show_id();
};

int Sfunc1::total = 0;

void Sfunc1::show_total(){
    cout << "Total is " << total << endl;
}

void Sfunc1::show_id(){
    cout << "ID is " << id << endl; 
}


/*
in main()...
    Sfunc1 s1;
    Sfunc1 s2;    

    Sfunc1::show_total(); // accessing static func from outside class

    s1.show_total();
    s1.show_id();

    s2.show_total();
    s2.show_id();

    cout << "----------- END OF PROGRAM --------" << endl;
*/