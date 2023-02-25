# 1 
* Abstract Classes and Pure Virtual Functions
* from the book "Object Oriented C++"
- Think of the shape class in the multshap program in Chapter 9. We’ll never make an object of
the shape class; we’ll only make specific shapes such as circles and triangles. When we will
never want to instantiate objects of a base class, we call it an abstract class. Such a class exists
only to act as a parent of derived classes that will be used to instantiate objects. It may also
provide an interface for the class hierarchy.
How can we make it clear to someone using our family of classes that we don’t want anyone to
instantiate objects of the base class? We could just say this in the documentation, and count on
the users of the class to remember it, but of course it’s much better to write our classes so that
such instantiation is impossible. How can we can do that? By placing at least one pure virtual
function in the base class. A pure virtual function is one with the expression =0 added to the
declaration.

# 2
- NOTE:
- abstract classes are base classes that do and will not have objects of itself instantiated, only derived class objects are instantiated
- they can serve as interfaces
- the value 0 is not assigned to anything.
The =0 syntax is simply how we tell the compiler that a virtual function will be pure

# 3
- notice that once you’ve placed a pure virtual function in the base class, you must override it in all the derived classes from which you want to instantiate objects
- notice also If a derived class doesn’t override the pure virtual function, it becomes an abstract class itself, and you can’t instantiate objects from it.
- NOTE:
- For consistency, you may want to make all
the virtual functions in the base class pure.