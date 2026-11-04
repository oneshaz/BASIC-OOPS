#include <iostream>

//learning polymorphism ; which means many forms
//in c++ , it allows the member function name or interface behave differently according to situations

//there are 2 major types, compile-time polymorphism and runtime polymorphism

//starting with compile-time polymorphism

//function overloading
//function overloading means creating multiple functions with the same name but different parameters

class Calculator
{
    public : 
    
    int add( int a , int b )
    {
        return a + b ; 
    }
    
    int add( int a , int b , int c )
    {
        return a + b + c ; 
    }
    
    double add( double a , int b , int c )
    {
        return a + b + c ; 
    }
} ; 

int main()
{
    Calculator c1 ; 
    
    int a, b, c ;
    double a1 = 30.1 ; 
    
    a = 10 ;
    b = 20 ; 
    c = 30 ; 
    
    std::cout << c1.add( a , b ) << "\n" ; 
    std::cout << c1.add( a1 , b , c ) ; 
    
    return 0;
}