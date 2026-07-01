#include<iostream>
using namespace std ;

// Multiple Inheritence 
// class A {           
//     public :
//     A(){
//         cout<<"Hello world"<<endl ;
//     }
// } ;

// class B : public A {                    // Calls A , then B
//     public:
//     B(){
//         cout<<"Hello from B"<<endl ;
//     }
// } ;

// class C : public A , public B {         // Calls A  , then B(B again calls A as it inherits A) , then C 
//     public :
//     C() {
//         cout<<"Hello from C"<<endl ;
//     }
// } ;

// Multilevel Inheritence 
class A {
    public :
    A() {
        cout<<"hello from A"<<endl ;
    }

    ~A() {
        cout<<"destructor of A"<<endl ;
    }
} ;

class B : public A {
    public :
    B() {
        cout<<"hello from B"<<endl ;
    }
    ~B() {
        cout<<"destructor of B"<<endl ;
    }
} ;

class C : public B {
    public :
    C() {
        cout<<"hello from C"<<endl ;
    }
    ~C() {
        cout<<"destructor of C"<<endl ;
    }
} ;

int main() {
    C obj ;

    return 0 ;
}