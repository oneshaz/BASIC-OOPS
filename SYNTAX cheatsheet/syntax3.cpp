#include <iostream>

//solution to problem arised in previous syntax_2
//problem : objects in nested classes do not connect

class Student
{
    public : 
    
    std::string name ; 
    int age ; 
    
    class Marks
    {
        public : 
        
        int social_marks ; 
        int science_marks ; 
        
        void display_marks()
        {
            std::cout << "sst : " << social_marks << "\n" ; 
        }
        
    } ; 
    
    class Friends
    {
        public : 
        
        std::string f1 ; 
        
        void display_friends()
        {
            std::cout << "friend : " << f1 << "\n" ; 
        }
    } ; 
    
    void display()
    {
        std::cout << "name : " << name << "\n" ; 
    }
    
    //making objects within the class connects these together
    //these will be unique to every new class created i.e 
    //every student s1,s2,etc will have their own stats
    
    Friends friendstats ; 
    Marks markstats ; 
} ; 

int main()
{
    Student s1 ; 
    s1.name = "Vanshaz" ; 
    s1.markstats.social_marks = 100 ; 
    
    s1.markstats.display_marks() ; 
    
    s1.friendstats.f1 = "none" ; 
    s1.friendstats.display_friends() ; 
    
    return 0 ; 
}