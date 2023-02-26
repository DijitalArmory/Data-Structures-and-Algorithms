# 1
* Initialization is NOT Assignment
- notice that the assignment operator's argument is passed by reference.
- Values passed by reference don’t generate copies (like pass by value), and thus help to conserve memory.

# 2
* from the book "Object Oriented C++"
* Returning a Value
As we’ve seen, a function can return information to the calling program by value or by refer-
ence. When an object is returned by value, a new object is created and returned to the calling
program. In the calling program, the value of this object can be assigned to a new object or it
can be used in other ways. When an object is returned by reference, no new object is created.
A reference to the original object in the function is all that’s returned to the calling program.

- The operator=() function in the Asnoverload class returns a value by creating a temporary Asnoverload object and
initializing it using the one-argument constructor in the statement
return Asnoverload(data);

- The value returned is a COPY of, but not the same object as, the object of which the overloaded
= operator is a member. Returning a value makes it possible to chain = operators:
a3 = a2 = a1;

- However, returning by value has the same disadvantages as passing an argument by value: It
creates an extra copy that wastes memory and can cause confusion. Can we return this value
with a reference, using the declarator shown here for the overloaded = operator?
* Asnoverload& operator = (Asnoverload& a)
// bad idea in this case

Unfortunately, we can’t use reference returns on variables that are local to a function.
Remember that local (automatic) variables—that is, those created within a function (and not
designated static)—are destroyed when the function returns. A return by reference returns
only the address of the data being returned, and, for local data, this address points to data
within the function. When the function is terminated and this data is destroyed, the pointer is
left with a meaningless value. Your compiler may flag this usage with a warning. (We’ll see
one way to solve this problem in the section “The this Pointer” later in this chapter.)

- NOTE:
- Not Inherited
The assignment operator is unique among operators in that it is not inherited. If you overload
the assignment operator in a base class, you can’t use this same function in any derived classes.