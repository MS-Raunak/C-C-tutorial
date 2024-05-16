/*    Pointer in C++
       ==============
     [] or *: value at address

New operator: This operator is use to allocate n memory space for a pointer variable,
when memory is successfully by this function it will return the base address of allocated 
memory to pointer variable otherwise NULL.

<ptr var>=new<type>[size]
EX:new int[10];     

delete<ptr var>:destroy memory block which allocate with the help of new operator.
delete x;  

Destructor
===========
It's a special member function use to destroy the object resources which allocate with
the help of new operator. */