#include<iostream>
#include<cstring>
using namespace std ;

//  class Add {      
//     // In C++ , by default , all data members of class are private .
//     public :               
//     int a , b , c ;
//     void setData(int x , int y) {
//         a = x ;
//         b = y ;
//     }
//     void cal() {                    //class methods can access data members directly .
//         c = a+b ;
//     }
//     void show() {
//         cout<<"a + b : "<<c ;
//     }
//     // We cannot access class member without object .
// } ;

class student {
    int id ;
    char name[20] ;
    char department ;

    public :
    void setData(int r , char n[] , char b) {
        id = r ;
        strcpy(name , n) ;
        department = b ;
    }
    void ShowData() {
        cout<<id<<" "<<name<<" "<<department ;
    }
} ;

int main() {
    // Object based programming , c was procedural programming .
    // cout<<"Hello C++"<<"\n" ;
    // int a , b ;
    // cin>>a>>b ;   // object called std where these values are stored .
    // int c = a + b ;
    // cout<<c ;

    // Add obj ;       // object of Add class .
    // obj.setData(10,13) ;
    // obj.cal() ;
    // obj.show() ;

    student s ;
    s.setData(13 , "Neymar" , 'B') ;
    s.ShowData() ;
    
    return 0 ;
}