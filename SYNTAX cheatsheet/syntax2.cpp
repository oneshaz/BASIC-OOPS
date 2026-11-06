#include <iostream>

//nested classes

class Student
{
    public : 
    
    std::string name ; 
    int age ; 
    
    class Marks
    {
        public : //the default paramter is private
        
        int social_marks ; 
        int science_marks ; 
        int hindi_marks ; 
        
        void display_marks()
        {
            std::cout << social_marks << " " << hindi_marks << "\n" ; 
        }
    } ; 
    
    class Friends
    {
        public : 
        
        std::string friend1 ; 
        std::string friend2 ; 
        
        void display_friends()
        {
            std::cout << friend1 << "\n" ; 
        }
    } ; 
    
    void display()
    {
        std::cout << "name : " << name << "\n" ; 
    }
} ; 

int main()
{
    Student s1 ; 
    
    s1.name = "vanshaz" ; 
    s1.display() ;
    
    Student::Marks m1 ; //scope resolution ; goes within
    
    m1.hindi_marks = 100 ; 
    m1.social_marks = 129 ; 
    m1.display_marks() ; 
    
    Student::Friends f1 ; 
    //scope resolution works great , but what if we want to connect these to the main class 
    f1.friend1 = "none" ; 
    f1.display_friends() ; 
    
    return 0 ; 
}