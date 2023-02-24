# 1
- to use a derived class' data members in a base class' constructor, the syntax is like so...
-
* private:
    * int a;
    * int b; 

    * public:
    * DerivedClass(int a) : BaseClass(a) {}
    * DerivedClass(int a, int b) : 
    * BaseClass(a) *  {this->b = b;}

    * void show_this_data(){
        cout << "b is " << b << endl;
- 

- Note: the caveat is that even the default constructor of the base class needs to be initialized

# 2
- derived classes inherit ththe base class' methods and can increase the functionality of that base class by adding in it's own method(s)