

# include <iostream>
# include<sstream>

using namespace std ;

// Name , Age , City and Pin Code .
// class Info {
//     string name ;
//     int age ;
//     string city ;
//     int Code ;
    
//     public :
//         void setdata() {
//             cout<<"Enter your name : " ;
//             cin>>name ;
//             cout<<"Enter your age : " ;
//             cin>>age ;
//             cout<<"Enter your city : " ;
//             cin>>city ;
//             cout<<"Enter the code : " ;
//             cin>>Code ;
//         }
//         void printData() {
//             cout<<name<<endl ;
//             cout<<age<<endl ;
//             cout<<city<<endl ;
//             cout<<Code<<endl ;
//         }
// } ;

// 2. Perimeter of Rectangle 
// class Rectangle {
//     int length ;
//     int breadth ;
// public :
//     void setter() {
//         cout<<"Enter the length of rectangle : " ;
//         cin>>length ;
//         cout<<"Enter breadth of rectangle : " ;
//         cin>>breadth ;
//     }

//     void getter() {
//         cout<<"Perimeter is "<< 2*(length + breadth) ;
//     }
// } ;


// 3. Dispaly time in seconds 
class Time{
int hours ;
int min ;
int sec ;
string time ;

public :
    void getter() {
        cout<<"Enter the time in hh:mm:ss format : " ;
        cin>>time ;
    }
    void setter() {
        string colon ;
        stringstream ss(time) ;
        ss>>hours>>colon>>min>>colon>>sec ;
    }

    void seconds() {
        cout<<"Total Seconds : "<<(hours * 3600) + (min * 60) + (sec) ;
    }
} ;

int main() {
    // Info obj ;
    // obj.setdata() ;
    // obj.printData() ;


// 2. 
    // Rectangle obj ;
    // obj.setter() ;
    // obj.getter() ;

// 3.
    Time t ;
    t.getter() ;
    t.setter() ;
    t.seconds() ;
    
    return 0 ;
}