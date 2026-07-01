#include <iostream>
using namespace std ;

void swap(int a , int b) {      // Call by value .
    int temp = a ;
    a = b ;
    b = temp ;
}

void swap2(int &x , int &y) {       // Call by reference .
    int temp = x ;
    x = y ;
    y = temp ;
}

void swap3(int *x , int *y) {       // Using Pointer .
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}

int main() {

       int a = 100 ;
       int b = 200 ;

//     int &temp = a ;
//     cout<<temp<<" "<<b<<endl ;
//     temp = b ;      // a = b
// //  &temp = b ;     // error , we cannot reintialize the reference variable .
//     cout<<temp<<" "<<b<<endl ;

        // swap(a,b) ;
        // cout<<a<<" "<<b ;

        // swap2(a,b) ;
        // cout<<a<<" "<<b ;

        // swap3(&a , &b) ;
        // cout<<a<<" "<<b ;

    return 0 ;
}