# 1
- there is an easier way (mostly syntax based) to return temporary objects from functions and overloaded operators

- notice that the overloaded unary operator method returns one float type, and that the compiler throws a error if a one-argument constructor is not initializes. 

# 2
- (From the book "Object Oriented C++")...
- But wait: Doesn’t this require a constructor that takes one argument It does, and to make this statement work we sneakily inserted just such a constructor into the member function list in COUNTPP3.

# 3
- NOTE: Operator overloading works just as well with binary operators
- (+, -, /, *, >, >=, <, <=, ||, &&. !)
- use cases... addition, subtraction, etc., string concatenation