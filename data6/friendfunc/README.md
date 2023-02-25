# 1
* Friend Functions
* from the Book "Object Oriented C++"
- The concepts of encapsulation and data hiding dictate that nonmember functions should not be
able to access an object’s private or protected data. The policy is, if you’re not a member, you
can’t get in. However, there are situations where such rigid discrimination leads to considerable
inconvenience.

# 2 
* Friends as Bridges
- Imagine that you want a function to operate on objects of two different classes. Perhaps the
function will take objects of the two classes as arguments, and operate on their private data. In
this situation there’s nothing like a friend function

- this data shows how to impliment friend functions

# 3
- Notice that both Friend class contain the friend function prototype
- notice that the 'Friend1' class has "forward declared" the 'Friend2' class. This is needed to impliment the friend function. 
- notice the friend function is defined in a seperate file and the file is included where the friend function is implimented (in main() in this case)