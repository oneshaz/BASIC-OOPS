#include <iostream>

//enum is a user defined data type that lets us define a collection of named constants

enum Trafficlight
{
    RED,
    YELLOW,
    GREEN  
} ;

enum Trafficlight2
{
    RED1 = 10, //we can assign our own values
    YELLOW1 = 20,
    GREEN1 = 30
} ; 

//by default, c++ assigns integer values to these names , like RED is 0 , YELLOW is 1 , GREEN is 2 

//pairing union with enum  ; with union, we couldnt usually tell which member was currently active
//

int main()
{
    Trafficlight signal1 = RED ; 
    std::cout << signal1 << "\n" ; 
    
    Trafficlight2 signal2 = RED1 ; 
    std::cout << signal2 << "\n" ; 
    
    //enum is generally used with switch 
    
    signal1 = GREEN ; 
    
    switch( signal1 )
    {
        case RED :
            std::cout << "stop" << "\n" ; 
            break ;
        
        case YELLOW : 
            std::cout << "slow" << "\n" ; 
            break ; 
        
        case GREEN : 
            std::cout << "go" << "\n" ; 
            break ; 
        
    }
    
    return 0 ; 
}