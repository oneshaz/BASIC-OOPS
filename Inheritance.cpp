#include <iostream>

//learning inheritance
//inheritance means one class can acquire the properties and functions of other class

//imagine we have a class named person --> with member data like age , name , gender 
//we make a class name students, a student is a person with a extra member data called marks
//we do not write all the members of person in student again - we can just inheit it 

class Person 
{
    public : 
    
    std::string name ; 
    int age ; 
    
    void display()
    {
        std::cout << "name : " << name << std::endl ; 
        std::cout << "age : " << age << std::endl ; 
    }
} ; 

// the above class is a parent class - we also call it a base class
// the class which would inherit is called derived class

class Student : public Person // syntax for inheritance - means student has public members of person
{
    public : 
    
    int marks ; 
    std::string branch ; 
    
    void display1()
    {
        std::cout << "name : " << name << "\n" ; 
        std::cout << "marks : " << marks << "\n" ; 
    }
} ; 

//nesting properties of inheritance

class A
{
    public : 
    int x = 10 ; 
} ; 

class B : public A // b inherits from a 
{
    public : 
    int y = 20 ; 
} ; 

class C : public B // c inherits from b , which inherits from a 
{
    public : 
    int z = 30 ; 
} ; 

class D1 
{
    public : 
    int p1 = 45 ; 
} ; 

class D2 : public D1 , public C 
{
    public : 
    int p2 = 67 ; 
} ; 

//C++ HAS 5 COMMON TYPES OF inheritance 
// Single inheritance : one parent one child 
// multilevel inheritance : nested inheritance 
// hierarchial inheritance : one parent multiple child 
// multiple inheritance : multiple parents one child 
// hybrid inheritance : combination of multiple inheritance types 

int main()
{
    Student s1 ; 
    s1.name = "vanshaz" ;
    s1.marks = 45 ; 
    s1.age = 10 ; 
    s1.branch = "aids" ; 
    
    s1.display1() ; 
    s1.display() ; 
    
    C obj ; 
    std::cout << obj.x << " " << obj.y << " " << obj.z << "\n" ; 
    
    D2 obj1 ; 
    std::cout << obj1.x << " " << obj1.p1 << " " << obj1.p2 << " " << obj1.y ; 
    
    return 0 ; 
}