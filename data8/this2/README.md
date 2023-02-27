# 1
* Using 'this' for Returning Values
- this data shows how to return values with the this pointer
- recall that you generally cannot return an object of it's own type by reference. 
- That is because when the member function (method) returns, the referenced object is destroyed, making that referenced object only a temporary object.

# 2
- notice that the return value is a refernce to the class's own object 
- I.E. "Object&"
- returning a pointer to "this" (i.e. "return *this) returns actual objects that are being referenced to, and those objects are not temporary. 


# 3
* from the Book "Object Oriented C++"
- Beware of Self-Assignment
A corollary of Murphy’s Law states that whatever is possible, someone will eventually do. This
is certainly true in programming, so you can expect that if you have overloaded the = operator,
someone will use it to set an object equal to itself:
alpha = alpha;
Your overloaded assignment operator should be prepared to handle such self-assignment.
Otherwise, bad things may happen. For example, in the main() part of the STRIMEM2 program,
if you set a String object equal to itself, the program will crash (unless there are other String
objects using the same strCount object). The problem is that the code for the assignment operator
deletes the strCount object if it thinks the object that called it is the only object using the
strCount. Self-assignment will cause it to believe this, even though nothing should be deleted.
- To fix this, you should check for self-assignment at the start of any overloaded assignment
operator. You can do this in most cases by comparing the address of the object for which the
operator was called with the address of its argument. If the addresses are the same, the objects
are identical and you should return immediately. (You don’t need to assign one to the other;
they’re already the same.) For example, in STRIMEM2, you can insert the lines
if(this == &S)
return *this;
at the start of operator=(). That should solve the problem.