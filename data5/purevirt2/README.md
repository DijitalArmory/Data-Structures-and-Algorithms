# 1
* Virtual Destructors
* from the book "Obkect Oriented C++"
- to ensure that derived-class objects are destroyed properly, you should make destructors in all base classes virtual.

# 2
- notice that the derived class is instantiated using a pointer to the abstract base class
- notice that instantiating the derived class obj, there is memory being allocated (with the 'new' operator)

# 3
- the destructors in the derived class are virtual (by inheritance) and of course can override the base implimentation