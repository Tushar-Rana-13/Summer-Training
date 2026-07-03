#include <iostream>
using namespace std;

// int a = 100;

// class A
// {
//     int a;
//     friend void show();             // Friend function declared as a freind to class which allows it to access private members of the class outside the class.

// public:
//     void fun();
// };

// void A::fun()               // SRO operator can be used to define the function outside the class.
// {
//     cout <<::a << endl;
// };

// void show()
// {
//     cout <<::a<<endl;
// }

// Inline Functions: Inline functions are used to reduce the function call overhead. The inline function is defined using the inline keyword. The inline function is expanded at the point of call, which reduces the overhead of function calls.
// inline int sqrt(int x) {
//     return x * x;
// }

// Generic Function is a function that can work with different data types. It is defined using the template keyword. The generic function is expanded at the point of call, which reduces the overhead of function calls.
// template<class T>
// void add(T a , T b) {
//     cout<<a+b<<endl ;
// }

// template<class T>
// int search(T arr[], int size, T key) {
//     for(int i = 0 ; i < size ; i++) {
//         if(arr[i] == key) {
//             return i ;
//         }
//     }
//     return -1 ;
// }

// Generic class 
// template <class T>
// class A
// {
//     T num;

// public:
//     A(T a)
//     {
//         num = a;
//     }
//     void show()
//     {
//         cout << num << endl ;
//     }
// };

template<class T>
class A{
    T num1 ;
    T num2 ;
    public :
    A(T a , T b) {
        num1 = a ;
        num2 = b ;
    }
    void add() {
        cout<<num1 + num2<<endl ;
    }
} ;

int main()
{
    // int a = 10;
    // cout << ::a<<endl;        // Global variable can be accessed using scope resolution operator.
    // A obj ;
    // obj.fun();
    // show();
    // cout<<sqrt(5)<<endl ;
    // add(5,10);
    // add(5.5,10.5);
    // double arr[10] = {1.0,2.0,3.0,4.0,5.0,6.0,7.6,8.5,9.3,10.0};
    // double key = 8.5;
    // int index = search(arr, 10, key);
    // if(index != -1) {
    //     cout<<"Element found at index: "<<index<<endl;
    // } else {
    //     cout<<"Element not found"<<endl;
    // }

    // A <int> obj(10) ;
    // obj.show() ;
    // A <float> obj1(13.7) ;
    // obj1.show() ;

    A<int> obj(10 , 20) ;
    obj.add() ;
    A<int>obj1(1.3 , 4.7) ;
    obj1.add() ;
    A<int>obj2('A','d') ;
    obj2.add() ;

    return 0;
}