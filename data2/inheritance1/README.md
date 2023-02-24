# 1
- this data shows the basics of how a (derived) class can inherit from another (base) class
- notice how the derived class can call the base class functions
- notice that the derived class can call the base class methods.
- notice also that the derived class doesnt necessarily need a constructor to call the base class methods... This comes with a caveat
- When a derived class without constructors calls a base call method, 
that derived class also inherits the base class data members and it's VALUES initialized within the base class' DEFAULT CONSTRUCTOR

# 2
* NOTE: 
- The keyword public specifies that objects of the derived class are able to access public member functions of the base class.
- The alternative is the keyword private. When this keyword is used, objects of the derived class cannot access public member functions of the base class