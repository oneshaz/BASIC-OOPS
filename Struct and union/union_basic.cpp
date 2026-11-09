#include <iostream>

// union is a user defined data-type , just like struct
// however in union , all data members share the same memory location

struct Data
{
    int x ; //each member variable gets their own memory location
    float y ; //each variable gets their respective bytes
    char z ; //int --> 4 bytes etc
} ; 

union Data2
{
    int x ; //all three members get a shared memory location
    float y ;
    char z ; 
} ; 

int main()
{
    Data d_struct ; 
    Data2 d_union ; 
    
    d_struct.x = 10 ; 
    std::cout << d_struct.x << "\n" ; 
    d_struct.y = 20.5 ; 
    std::cout << d_struct.y << "\n" ; 
    std::cout << d_struct.x << "\n" ; //because d_struct.x and d_struct.y are in diff memory locations
    //the value does not get overrided 
    
    std::cout << "union" << "\n" ; 
    
    d_union.x = 110 ; 
    std::cout << d_union.x << "\n" ; 
    d_union.y = 125.5 ; 
    std::cout << d_union.y << "\n" ; 
    std::cout << d_union.x << "\n" ; //this gives garbage value
    //because the d_union.x gets replaced by d_union.y , it becomes an inactive member attribute of the union
    //therefore it has no value
    
    //in struct ; memory is seperate and all members can hold individual values, size includes space for all data
    //in union ; memory is shared and only one member can hold value actively, size is based on largest data 

    //why do we need union??
    //memory efficient, can also be used for encryption( using an important data like an atm pin then discard)
    
    
    return 0 ; 
}