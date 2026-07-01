// Day-3 
//CONSTRUCTOR :
    // constructor is a special method that has no return type . 
    //The name of comnstructor will be same as  class name .
    //We do not need to call the function , will call automatically when object will be created .

#include <iostream>
using namespace std ;

class Employee{
    string e_name ;
    int e_id  ;
    int e_salary ;
    string e_department ;

    public :
        Employee(string e_name , int e_id , int e_salary , string e_department) {
                this->e_name = e_name ;     // this pointer points to object variable (instance variable) .  
                this->e_id = e_id ;
                this->e_salary = e_salary ;
                this->e_department = e_department ;
        }
    
        void showdata() {      //void showdata(Employee *this) { cout<<this->e_id ; }   ----->this points to object which has all data stored . Internal working of this code
            cout<<e_name<<endl ;
            cout<<e_id<<endl ;
            cout<<e_salary<<endl ;
            cout<<e_department<<endl ;
        }

} ;

class Student{
    int rollno ;
    string name ;
    public:
       Student() {
            cout<<"A " ;
       }
       Student(int a) {         // Parametrized Constructor .
            cout<<a ;
       }
} ;

int main() {
    // Student obj1 ;
    // Student obj2(20) ;

    Employee e1("Ram" , 101 , 50000 , "HR") ;
    Employee e2("Shyam" , 102 , 60000 , "Tech") ;
    e1.showdata() ;     // Employee : showdata(e1), object is passed in argument    ----> internal working
    e2.showdata() ;     // Employee : showdata(e2) 
    
    // copy constructor 

    return 0 ;
}