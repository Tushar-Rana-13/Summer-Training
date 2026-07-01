#include<stdio.h>
int main() {

    // Operators in C

    // Relational
    // if (printf("hii") > 2 ) {  // it prints "hii" and returns number of characters printed which is 3, so condition is true
    //     printf("True\n") ;
    // } else {
    //     printf("False") ;
    // }
                   // Output hiiTrue


    // int a = printf("4") ; 
    // printf("\n%d" , a) ;                                  // returns number of characters printed
                        // Output : 4
                        //          1


    // int b , c ;
    // int a = scanf("%d%d" , &b , &c) ; 
    // printf("%d" , a) ;                                  // returns number of inputs taken successfully


    // if(printf("c++") == printf("php")) {               // both have same number of characters
    //     printf("True") ;
    // } else {
    //     printf("False") ;
    // }
           //   output : c++phpFalse



    // Logical 
    //   if(printf("c++") < 3 && printf("php") == 3) {     // first condition is false it will not check second condition and directly goes to else block and prints "False"
    //     printf("True") ;
    //   } else {
    //     printf("False") ;
    //   }
              //   output : c++False

        // if (printf("c++") <= 3 || printf("php") == 3) {     // first condition is true it will not check second condition and directly goes to if block and prints "True"
        //     printf("True") ;
        // } else {
        //     printf("False") ;
        // }
        //       //   output : c++True


    // int a , b ;
    // scanf("%d%d" , &a , &b) ;
    // int c = a > b ? a : b ;  // ternary operator
    // printf("%d" , c) ;
        
    // int a , b ;
    // a = 10 > 20 ? b = 20 : printf("python") ;  // ternary operator
    // printf(" a = %d , b = %d" , a , b) ;

    // if (2+3-5) {             // any non zero value is considered as true in C
    //     printf("True") ;
    // } else {
    //     printf("False") ;
    // }
      // output : False


    int marks ;
    char gender ;
    printf("Enter your marks : ") ;
    scanf("%d", &marks) ;
    printf("Enter your gender : ") ;
    scanf(" %c", &gender) ;        // whenever we take input of char after taking input of int or float we have to put a space before %c in scanf to consume the newline character left in the buffer by previous scanf
    if (marks > 75) {
        if (gender == 'm') {
            printf("\nyou are selected in Marketing team") ;
        } else{
            printf("\nyou are selected in Operation team") ;
        } 
    }else {
        printf("\nyou are not selected") ;
    }
    return 0 ;
}   
