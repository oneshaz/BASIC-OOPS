#include <iostream>

//struct

//imagine you want to store information about a student ; name , marks , age , bloodgroup etc 
//but making three different random variables everytime would get hectic to manage
//we want a way where we can group these three variables

//struct is a custom datatype which groups many different variables under one name
//the variables it groups can be of different datatypes

struct student //student is the name of the structuve i.e the custom datatype
{
    std::string name ; //these member variables are the attributes
    int age ; 
    float marks ; 
    
} ; 

int main()
{
    student s1 ; 
    s1.name = "alex" ; 
    s1.age = 67 ; 
    s1.marks = 6767 ; 
    
    std::cout << s1.name << " " << s1.marks << "\n" ; 
    
    std::cout << s1.marks + s1.age << "\n" ; //you can add these attributes
    
    student s2 ; 
    s2.age = 120 ; 
    
    std::cout << s1.age + s2.age ; //you can even add the attributes of different structures
    
    return 0 ; 
}