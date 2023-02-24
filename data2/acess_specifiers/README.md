# 1
* From Book 'Object Oriented C++'

-
Access Specifiers: When to Use What
How do you decide when to use private as opposed to public inheritance? In most cases a
derived class exists to offer an improved—or a more specialized—version of the base class.
We’ve seen examples of such derived classes (for instance, the CountDn class that adds the
decrement operator to the Counter class and the manager class that is a more specialized ver-
sion of the employee class). In such cases it makes sense for objects of the derived class to
access the public functions of the base class if they want to perform a basic operation, and to
access functions in the derived class to perform the more specialized operations that the
derived class provides. In such cases public derivation is appropriate.
In some situations, however, the derived class is created as a way of completely modifying the
operation of the base class, hiding or disguising its original interface. For example, imagine
that you have already created a really nice Array class that acts like an array but provides
protection against out-of-bounds array indexes. Then suppose you want to use this Array class
as the basis for a Stack class, instead of using a basic array. You might derive Stack from
Array, but you wouldn’t want the users of Stack objects to treat them as if they were arrays,
using the [] operator to access data items, for example. Objects of Stack should always be
treated as if they were stacks, using push() and pop(). That is, you want to disguise the Array
class as a Stack class. In this situation, private derivation would allow you to conceal all the
Array class functions from objects of the derived Stack class.
-