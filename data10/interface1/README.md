# 1
* Interfaces
- The declarations in an interface header file need to be public for several reasons. First, it’s a convenience
to the client to see the actual class definitions rather than to have to read a description
of them. More importantly, the programmer will need to declare objects based on these classes
and call on member functions from these objects. Only by declaring the classes in the source
file is this possible.

# 2
- Interfaces are useful for when you need to define and impliment a function without a class implimentation (even though interfaces are declared within a class)

# 3
- notice the interface function declaration (virtual type func() = 0)
- notice that a struct acts as a "capsule" of the interface's functionality
- the "inherit" syntax (struct : interface_name) says that "this is an encapsulated interface function"
- notice the encapsulated interface function is a virtual function being overridded with the 'override' keyword
- Alos notice how the class holding the encapsulated interface function is then declared as a protected data member (so it can be accesses by a public 'get' method of the declaring class)

# 4
- Notice that the 'getter' method return a REFERENCE to the interface object (syntax=interface&)
- also notice that the 'getter' method returns the class data member...
- which is the encapsulating struct data member

# 5
- what is happening....
- is that the struct itself acts as the interface between the interface feature it encapsulates & the data member the class declares, which is what is being return in the 'getter' method, which has become a REFERENCED interface obj (int&) THROUGH the struct..


