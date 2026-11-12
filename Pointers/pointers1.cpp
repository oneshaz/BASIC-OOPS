#include <iostream>

int main()
{
    //changing values via pointers
    
    int a = 10 ; //a variable has value 10
    int *p = &a ; //p has the address of a 
    
    std::cout << a << "\n" ; 
    
    *p = 120 ; //the dereferenced value of p is a exactly
    
    std::cout << a << "\n" ; 
    
    int *p1 ; 
    // p1 = a ; :: wrong 
    *p1 = a ; 
    std::cout << *p1 << "\n" ; 
    
    return 0 ; 
}