#include <iostream>

//questions in function overloading

class Output
{
    public : 
    
    void display( int a )
    {
        std::cout << "integer" << "\n" ; 
    }
    
    void display( float b )
    {
        std::cout << "float" << "\n" ; 
    }
    
} ; 

class ambiguity
{
    public : 
    
    void display( int a , double b )
    {
        std::cout << "integer\n" ; 
    }
    
    void display( double a , int b )
    {
        std::cout << "double\n" ; 
    }
} ; 

int main()
{
    int a = 10 ; 
    float b = 20.0 ;
    
    Output o1 ; 
    
    o1.display( a ) ; 
    o1.display( b ) ; 
    
    ambiguity a1 ; 
    
    a1.display( a , b ) ; 
    a1.display( b , a ) ; 

    
    return 0 ; 
}