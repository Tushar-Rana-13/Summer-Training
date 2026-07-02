// Function Overriding
#include <iostream>
using namespace std;

// class A {
//     public :
//     void fun() {
//         cout<<"fun-1"<<endl ;
//     }
// } ;

// class B : public A {
//     public :
//     void fun() {                    // function overriding
//         cout<<"fun-2"<<endl ;
//     }
// } ;

class A
{
    int n;
    virtual void fun() {};
};

int main()
{
    //     B b ;
    //     b.fun() ;       // early binding (compile time polymorphism)
    //     A *ptr = new B() ;  // late binding (run time polymorphism) static type of ptr is A but dynamic type of ptr is B so it will call the function of class A because the function is not virtual in class A
    //     ptr->fun() ;

    A obj;
    cout << sizeof(obj) << endl; // 8 bytes because of virtual function pointer (vptr) which is 8 bytes in 64 bit machine && 4 bytes in 32 bit machine.

    return 0;
}