#include <iostream>

//operator overloading is basically performing operators between different objects
//examples ; student s1 and student s2 ; s1 + s2 = ? 

class Assign
{
    public : 
    
    int number ; 
    
    Assign( int m )
    {
        number = m ; 
    }
    
} ;

class Addition
{
    public : 
    
    int a ;
    
    Addition( int m )
    {
        a = m ; 
    }
    
    Addition operator + ( Addition anything )
    {
        return Addition( a + anything.a ) ; //in above ; the returned value is int, this is addition datatype
    }
} ; 

int main()
{
    
    //class Assign output
    
    Assign a1(100) ; 
    Assign a2(120) ; 
    std::cout << a1.number << " " << a2.number << "\n"; 
    
    std::cout << a1.number + a2.number << "\n" ; 
    
    //class addition output
    
    Addition aa1(100) ; 
    Addition aa2(120) ; 
    
    Addition aa3 = aa1 + aa2 ; 
    
    std::cout << aa3.a ; 
    
    return 0 ; 
}