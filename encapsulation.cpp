#include <iostream>
#include <string>

//OOPS is a programming appraoch where we treat elements like objects and classes
//instead of keeping everything seperate - we group them like objects under classes
//students is a class , things associated with students like marks , age , gender , grade function are objects

class Students
{
    public : 
    
    std::string name ; //member variables
    int age ; 
    int marks ; 
    
    private : 
    
    std::string gender ; 
    
    void display() //member functions
    {
        std::cout << name << " " << age << " " << marks ; 
    }
} ; 

//Encapsulation ; bundling data and the functions which operate on said data into one unit(class)
//we do this while controlling access to the data

class Students1 //Encapsulation basically means privating so others cant modify - putting restrictions on modifs 
{
    private : //no we cannt directly access these data members
    
    std::string name1 ; 
    int age1 ; 
    
    //private variables can still be accessed by the member functions of the same class
    //so the question comes - how do we modify private data, by creating public functions with controlled access
    //these public functions are called setters and getters
    
    public : 
    
    void setage1( int a ) //creating a setter
    {
        age1 = a ;
    }
    
    void setage2( int a )
    {
        if( a >= 0 && a <= 120 )
            age1 = a ;
        else
            std::cout << "rejected" ; //a rejected setter call does not overwrite previous value of age1
    }
    
    //we can make this safer by putting conditions - kinda like a helper functions
    
    int displayage1() //creating a getter
    {
        return age1 ; 
    }
    
    //we cannot directly access age even if modify it - so we access it like this
} ; 

int main()
{
    Students s1 ; //this creates an object called called s1
    
    s1.name = "Vanshaz" ; 
    s1.age = 200 ; 
    s1.marks = 19 ;
    
    // s1.gender = "mail" ; //will give error cuz private
    
    // s1.display() ; 
    
    Students1 s2 ; 
    int a = 101 ; 
    s2.setage2(a) ; 
    std::cout << s2.displayage1() ; 
    // a = 121 ; 
    // s2.setage2(a) ; 
    
    return 0 ; 
}