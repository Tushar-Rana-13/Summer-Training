#include<stdio.h>

void func() ;       // Declaration of function 
void add() ;
int max() ;

int main() {
    // func() ;        // Calling of function
    // func() ;
    // func() ;
    // add(a , b) ;  // call function and pass argument .    

    int arr[5] ;
    int i ;
    printf("Enter the marks: ") ;
    for(i = 0 ; i < 5 ; i++){
        scanf("%d" , &arr[i]) ;
    }
    int result = max(arr) ;
    printf("Maximum is : %d" , result) ;
    return 0 ;
}

    int max(int arr[]) {
    int curr = arr[0] ;
    int i ;
    for(i = 1 ; i < 5 ; i++){
        if(curr < arr[i]) {
            curr = arr[i] ;
        }
    }
    return curr ;
}
  
void add(int a , int b) {
    printf("%d" , a+b) ;
}

void func() {        // Definition of Function
    printf("Happy Learning!\n") ;
}