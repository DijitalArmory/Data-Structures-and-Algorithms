# 1
* Self-Containing Classes
* From the book "Object Oriented C++"
- We should note a possible pitfall in the use of self-referential classes and structures. The link
structure in LINKLIST contained a pointer to the same kind of structure. You can do the same
with classes:
- 
class sampleclass
{
sampleclass* ptr;
};
- 
// this is fine
However, while a class can contain a pointer to an object of its own type, it cannot contain an
object of its own type:
- 
class sampleclass
{
sampleclass obj;
};
// can’t do this
This is true of structures as well as classes.