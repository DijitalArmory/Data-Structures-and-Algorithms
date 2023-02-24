# 1
- this data shows how a derived class can access a base class' data members using the 'protected' keyword

- derived class member functions can access members of the base class IF the members are public, or if they are 'protected'. They CAN'T access private members.

- making them public is in general not a secure way of going about things, however, since that would allow it to be accessed by any function anywhere in the program and eliminate the advantages of data hiding

# 2
- from the book "Object Oriented C++"
* Dangers of protected
- You should know that there’s a disadvantage to making class members protected. Say you’ve written a class library, which you’re distributing to the public. Any programmer who buys this library can access protected members of your classes simply by deriving other classes from them. This makes protected members considerably less secure than private members. To avoid corrupted data, it’s often safer to force derived classes to access data in the base class using only public functions in the base class, just as ordinary main() programs must do. Using the protected specifier leads to simpler programming, so we rely on it—perhaps a bit too much— in the examples in this book. You’ll need to weigh the advantages of protected against its disadvantages in your own programs