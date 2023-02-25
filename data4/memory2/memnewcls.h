#include <iostream>
#include <cstring>
#include "my_str.h"
using namespace std;

class Memnewcls
{
    private:
    char* ptr;
    int len;

    public:
    Memnewcls(){
        len = strlen(str);
        ptr = new char[len+1];
        strcpy(ptr, str);
    }
};
