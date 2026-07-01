        //  COPY CONSTRUCTOR 

# include<iostream>
using namespace std ;

class A {
    public:
    int a ;
    int b ;
        A(int a , int b) {
            this->a = a ;
            this->b = b ;
        }
        void show() {
            cout<<a<<" "<<b<<" " ;
        } 

        void add1(A *ptr , A &ob){
            int s = ptr->a + ob.a ;
            cout<<s<<endl ;
        }

        void add3(A&ob) {               // internally add3(A *this , A&obj)
            int s1 = this->a + ob.a ;
            cout<<s1<<endl ;
        }

        A(A &obj) {     // internally copy(A*this , &obj)
            this->a = obj.a ;
            this->b = obj.b ;
        }
} ;

void add(A &ob1 , A &ob2) {
            int sum = ob1.a + ob2.a ;
            cout<<sum<<endl ;
        }

int main() {
    A obj1(10 , 20) ;
    // A obj2(30 , 40) ;
     
    // add(obj1 , obj2) ;
    // obj2.add1(&obj1 , obj2) ;
    // obj1.add3(obj2) ;       // internally A::(&obj1 , obj2)

    // obj2.copy(obj1) ;  // internally A::copy(obj2 , obj1) ;
    A obj2(obj1) ;
    
    return 0 ;
}