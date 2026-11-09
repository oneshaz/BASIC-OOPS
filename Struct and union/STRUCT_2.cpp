#include <iostream>

struct Student
{
    std::string name ; 
    int age ; 
    int social_marks ; 
    
    void display( int m )
    {
        std::cout << m << "\n" ; 
    }
} ;

void display_marks( Student s ) //we can pass structures in variables ; it is a custom datatype afterall
{
    std::cout << "social_marks : " << s.social_marks << "\n" ; 
}

int main()
{
    Student s[3] ; //we can also create an array of structures ; 
    
    s[0].name = "a" ; 
    s[1].name = "b" ; 
    s[2].name = "c" ;
    
    Student s1 ; 
    s1.display(4) ; 
    
    s1.social_marks = 120 ; 
    display_marks( s1 ) ; 
    
    //another way of initialising structures is 
    Student s3 = {"abcd" , 120 , 10 } ; 
    
    std::cout << s3.name << " " << s3.social_marks ; 
    
    return 0 ; 
}