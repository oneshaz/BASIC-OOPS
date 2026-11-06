#include <iostream>

//General Syntax warmup of OOPs

class Student //name of class becomes the new data type
{
    public : 
    
    std::string name ; 
    int age ; 
    
    void display()
    {
        std::cout << "name = " << name << "\n" ; 
    }
} ; 

int main()
{
    Student s1 ; //student is the datatype, s1 is the variable storing custom datatype 
    
    //s1.'attribute' ; used to define the subvariable
    
    s1.name = "volatilez" ; 
    s1.display() ; 
    
    return 0 ; 
}