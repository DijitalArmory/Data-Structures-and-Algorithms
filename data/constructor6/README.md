# 1
- this data shows how to use overloaded constructors
- notice you can make multiple constructors
- the default constructor has 0 parameters, with default arguments (data members) initialized
- the second constructor has 1 parameter, with 1 default argument (data memeber) initialized
- the third constructor has 2 parameters w/no data members w/default initializations

# 2
- the 'Get'/'Set'/'Show' methods have remained in the same format and will work with either constructor

# 3
- notice the method prototype
- the prototype is declared within the class
- the method is defined outside of the class

# 4
- also notice the method's parameters are of the same type as the class that the actual method is a part of
- this is very interesting and useful, as this functionality makes it possible to use class implimentations (objects) as function arguments
- the method is implimented by object-A,  takes a data member(s) of object-B and increments it by a data member(s) object-C
- The object-A (method) prints out the result(s)

# 5
- Once more, notice the syntax of the function declaration
- The declarator in this definition contains some unfamiliar syntax. The function name is preceded by the class name, and a new symbol—the double colon (::). This symbol is called the scope resolution operator. It is a way of specifying what class something is associated with.