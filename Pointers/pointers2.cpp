#include <iostream>

//pointers and function

void display( int a ) // call by value ; here the value is passed as just a parameter
{
    a = 120 ; 
    std::cout << a << "\n" ; 
}

void display2( int &b ) // call by reference ; the memory is passed as a parameter 
{
    b = 300 ; 
    std::cout << b << "\n" ; 
}

int main()
{
    std::cout << "call by value" << "\n" ; 
    int a = 10 ; 
    
    std::cout << a << "\n" ; //10
    display( a ) ; //120
    std::cout << a << "\n" ; //10
    
    std::cout << "call by reference" << "\n" ; 
    int b = 20 ; 
    
    std::cout << b << "\n" ; //20
    display2( b ) ; //300 
    std::cout << b << "\n" ; //300
    
    
    return 0 ; 
}