#include <iostream>

//operator overloading ; we know operators perform operations on variables ex: a + b where theyre int, float etc
//but what if the datatype is custom, then what will operator do?

//operator overloading helps us define function of operators on custom datatypes / own objects

class Student
{
    public : 
    
    // operator overloading syntax
    // return_type operator symbol (parameters)
    // { code/return logic }
    
    std::string name ; 
    int social_marks ; 
    int science_marks ; 
    int marks ; 
    
    //below is a constructor - it is like a function but it gets run every time a class is created
    //unlike other functions which run when called - it runs everytime
    
    Student( int m )
    {
        marks = m ; 
    }
    
    int operator + (Student s)
    {
        return marks + s.marks ; 
    }
    
} ; 

int main()
{
    Student s1(80) ; 
    Student s2(90) ; 
    
    std::cout << s1 + s2 ; 
    
    return 0 ;
}