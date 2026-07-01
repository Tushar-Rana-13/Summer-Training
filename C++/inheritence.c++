// Day-4 
#include<iostream>
using namespace std ;

// class A {
//     public:
//     void msg() {
//         cout<<"hello" ;
//     }
// } ;

// class B {               // Has-A-Relation 
//     A obj ;
//     public :
//     void display() {
//         obj.msg() ;
//     }
// } ;

// class C : public A {            // Is-A-Relation or Inheritence .                                               
//     public :
//     void show() {
//         cout<<"msg : " ;
//     }
// } ;

class A {
    int a ;
    int b ;
    public :
    A(int a , int b) {
        this->a = a ;
        this->b = b ;
        cout<<a<<endl<<b<<endl;
    }
} ;

class B : public A {
    public :
    B(int a , int b):A(a,b) {       // call parametrized constructor of A .
        cout<<a<<endl<<b<<endl ;
    }
} ;

int main() {
    // B obj1 ;
    // obj1.display() ;

    // C obj2 ;
    // obj2.show() ;
    // obj2.msg() ;
  
    B obj1(10 , 20) ;   // B inherits A , so firstly A's member function is called and then B executes.
    A obj(100,200) ;
    return 0 ;
}