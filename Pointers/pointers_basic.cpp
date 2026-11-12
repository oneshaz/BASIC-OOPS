#include <iostream>

//learning pointers in C++

int main()
{
    int a = 10 ; 
    //when you declare a variable - a space/box in the memory is created where the value is stored
    //that space in the memory has an address of its own - memory address
    
    //every variable has a value and a corresponding memory address[where the value is stored] ; 
    
    int b = 120 ; 
    std::cout << b << " : " << &b << "\n" ;
    
    //& ; the address of operator
    //b --> value ; &b --> address ; the address differs everytime the program is run
    
    //pointer is a variable which stores the memory address of another variable
    //it is declared via * ;; datatype *variable_name ;
    
    
    // int *p1 = b ; 
    // std::cout << p1 << "\n" ; :: will give error cuz pointers only store memory address
    
    //to access the value of the memory address ; we use the dereference operator * 
    
    
    int * p = &a ; 
    //int* p ; int *p ; int * p ==> all same
    
    std::cout << "p : " << p << "\n" ;
    std::cout << "*p : " << *p << "\n" ; //dereference operator
    std::cout << "&a : " << &a << "\n" ; 
    std::cout << "a : " << a << "\n" ; 
    
    // p is like &a 
    // *p is like a 
    
    std::cout << *(&a) << "\n" ; 
    std::cout << &(*(&a)) << "\n" ; 
    
    return 0 ; 
}