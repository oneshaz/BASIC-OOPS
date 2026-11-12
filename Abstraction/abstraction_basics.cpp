#include <iostream>

//abstraction in c++
//abstraction is the process of hiding implementation details and only showing the users whats important 
//kinda like frontend and backend --> abstraction only shows imp stuff like frontend and hides the backend

//simple abstraction code
//in the example below - the user doesnt need to know how the balance gets updated

class Bank
{
    private : 
    
    int balance = 1000 ; 
    
    public : 
    
    void deposit( int a )
    {
        balance += a ; 
    }
    
    void balanceshow()
    {
        std::cout << balance ; 
    }
    
} ; 

//the above function uses encapsulation - encapsulation and abstraction often work together

//there are 2 ways for abstraction
// 1 : access specifiers (encapsulation)
// 2 : abstract classes and pure virtual function

int main()
{
    Bank b1 ; 
    
    //the user only interacts with deposit and balanceshow function
    b1.deposit( 20 ) ; 
    b1.balanceshow() ; 
    
    return 0 ; 
}