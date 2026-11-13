#include <iostream>

// runtime polymorphism, function call implementation depending on the object, decision made at runtime
// one function name , different behaviour depending on the object

class Animal
{
    public : 
    
    void sound()
    {
        std::cout << "animal makes a sound\n" ; 
    }
} ; 

// this is function overriding, where function depends on the object
// in function overloading, the function depended on the parameter

class Dog : public Animal
{
    public : 
    
    void sound()
    {
        std::cout << "woof woof\n" ; 
    }
} ; 

class Cat : public Animal
{
    public : 
    
    void sound()
    {
        std::cout << "meow meow\n" ; 
    }
} ; 


int main()
{
    Animal a1 ; 
    Dog d1 ; 
    Cat c1 ; 
    
    a1.sound() ; 
    d1.sound() ;
    c1.sound() ; 
    
    Dog d ; 
    
    //declaring an object which is a pointer of animal class , points to mem address of dog object
    //this only works cuz dog is inherited from animal class 
    Animal* ptr = &d ; 
    
    //this is called upcasting ; strong a derived class pointer in a base class
    
    //the '->' arrow operator is used access members thru pointers
    ptr->sound() ; 
    
    //the above code will output "animal makes a sound" and not "woof woof"
    //thats cuz the original class is animal 
    
    return 0 ; 
}