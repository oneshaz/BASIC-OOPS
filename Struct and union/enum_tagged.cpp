#include <iostream>

//using enum with union

enum Datatype
{
    INTEGER,
    FLOAT,
    CHARACTER
} ; 

union Data
{
    int i ; 
    float f ; 
    char c ; 
} ; 

struct container
{
    Data value ; 
    Datatype type ; 
} ; 

int main()
{
    container d ; 
    
    d.value.i = 100 ; 
    // d.value.f = 25.2 ; 
    // d.value.c = 'a' ; 
    d.type = INTEGER ; 
    
    //the enum acts as a label for the active union member
    //the enum tells us the active union member is INT , the union stores the INT 
    
    //the above pattern is called tagged union or discriminated union
    
    //what the below code does is that it compares the enum attribute to the datatype
    
    if( d.type == INTEGER )
        std::cout << "INTEGER : " << d.value.i ; 
    if( d.type == FLOAT )
        std::cout << "FLOAT : " << d.value.f ; 
    if( d.type == CHARACTER )
        std::cout << "CHAR : " << d.value.c ; 
    return 0 ; 
}