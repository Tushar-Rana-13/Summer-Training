// Day - 5
// Polymorphism in C++ 
// Static polymorphism is achieved through function overloading and operator overloading.(Compile time polymorphism)(static binding)
// Dynamic polymorphism is achieved through function overriding.(Run time polymorphism)(dynamic binding)

# include<iostream>
using namespace std;

// Function overloading 
// class A {
//     public :
//     void sum(int a , int b) {
//         cout<<a+b<<endl ;
//     }

//     void sum(int a , int b , int c) {
//         cout<<a+b+c<<endl ;
//     }

//     void sum(int a , int b , int c , int d) {
//         cout<<a+b+c+d<<endl ;
//     }

//     void sum(char a , int b) {
//         cout<<a+b<<endl ;
//     }

//     void sum(int a , char b) {
//         cout<<a+b<<endl ;
//     }
// } ;

// Operator overloading 

class A {
    int a ;
    public :
    A(int n) {
        this->a = n ;
    }

    A operator +(A &obj) {
        A temp (this->a + obj.a) ;
        return temp ;
    }

    A operator -(A &obj) {
    A temp (this->a - obj.a) ;
    return temp ;
    }

    A operator *(A &obj) {
        A temp (this->a * obj.a) ;
        return temp ;
    }

    bool operator ==(A &obj) {
        return this->a == obj.a ;
    }

    void display() {
        cout<<a<<endl ;
    }
} ;

int main() {
    // A obj ;
    // obj.sum(10 , 20) ;
    // obj.sum(10 , 20 , 30) ;
    // obj.sum(10 , 20 , 30 , 40) ;
    // obj.sum('A' , 10) ;
    // obj.sum(10 , 'B') ;

    A obj1(10) ;
    A obj2(20) ;
    // A obj3 = obj1 + obj2 ;  // internally -> obj1 + obj2 -> A::+(&obj1 , obj2) ;
    // A obj4 = obj1 - obj2 ;
    // A obj5 = obj1 * obj2 ;
    if (obj1 == obj2){
        cout<<"Equal"<<endl ;
    } else {
        cout<<"Not Equal"<<endl ;
    }

    // obj3.display() ;
    // obj4.display() ;
    // obj5.display() ;

    return 0 ;
}