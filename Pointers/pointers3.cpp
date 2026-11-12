#include <iostream>

//learning call by reference by actually using pointers

void display2( int *p )
{
    *p = 120 ; 
    std::cout << *p << "\n" ; 
}

//the two options to call by reference
//display2( int &a ) or display2(int *ptr )
//using &a as a reference can be problemative - cuz once its initialized, cannot be made to refer to other var

// int a = 10 ; 
// int b = 20 ; 
// int &ref = a ; 
// ref = b ; 
// ref is just an alias for a, now in the above example , outputting a also gives 20 
// a reference is permanently tied to the memory it was initialized with , not pointers - they are variables

// int a = 10 ; 
// int b = 20 ; 
// int* ptr = &a ; 
// ptr = &b 
// now ptr holds memory address of b 
int main()
{
    int a = 10 ; 

    std::cout << a << "\n" ; 
    display2( &a ) ; 
    std::cout << a << "\n" ; 
    
    //you can alternatively 
    std::cout << "ex 2" << "\n" ; 
    
    int b = 300 ; 
    int* ptr = &b ; 
    
    std::cout << b << "\n" ; 
    display2( ptr ) ; 
    std::cout << b << "\n" ; 
    
    return 0 ; 
}