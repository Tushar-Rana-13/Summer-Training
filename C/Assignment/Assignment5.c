// Assignment Number - 5 

# include <stdio.h>

int main() {
// Day name of week using switch case

    // int day ;
    // printf("Enter the day number (1-7): ") ;
    // scanf("%d", &day) ;
    // switch (day) {
    //     case 1 :
    //         printf("Monday") ;
    //         break ;
    //     case 2 :
    //         printf("Tuesday") ;
    //         break ;
    //     case 3 :
    //         printf("Wednesday") ;
    //         break ;
    //     case 4 :
    //         printf("Thursday") ;
    //         break ;
    //     case 5 :
    //         printf("Friday") ;
    //         break ;
    //     case 6 :
    //         printf("Saturday") ;
    //         break ;
    //     case 7 :
    //         printf("Sunday") ;
    //         break ;
    //     default :
    //         printf("Invalid day number. Please enter a number between 1 and 7.") ;
    // }

// total number of days in month 
    // int month ;
    // printf("Enter month number :") ;
    // scanf("%d" , &month) ;
    // switch (month) {
    //     case 1 :
    //     case 3 :
    //     case 5 :
    //     case 7 :
    //     case 8 :
    //     case 10 :
    //     case 12 :
    //         printf("31 days") ;
    //         break ;
    //     case 4 :
    //     case 6 :
    //     case 9 :
    //     case 11 :
    //         printf("30 days") ;
    //         break ;
    //     case 2 :
    //         printf("28 or 29 days") ;
    //         break ;
    //     default :
    //         printf("Invalid month number. Please enter a number between 1 and 12.") ;
    // }


// checking whether alphabet is vowel or consonant
    // char alphabet ;
    // printf("Enter a alphabet :") ;
    // scanf("%c" , &alphabet) ;
    // switch(alphabet){
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //         printf("Vowel") ;
    //         break ;
    //     default:
    //         printf("consonant") ;
    // }

// Maximum between two numbers 
    // int a , b ;
    // printf("Enter two numbers : ") ;
    // scanf("%d%d" , &a , &b) ;
    // switch (a > b) {
    //     case 1 :
    //         printf("%d is maximum" , a) ;
    //         break ;
    //     case 0 :
    //         printf("%d is maximum" , b) ;
    //         break ;
    // }

// Check even or odd
    // int num ;
    // printf("Enter num : ") ;
    // scanf("%d" , &num) ;
    // switch(num % 2 == 0){
    //     case 1 :
    //         printf("Even number") ;
    //         break ;
    //     case 0 :
    //         printf("Odd number") ;
    //         break ;
    // }

// Positive , neg. , zero 
    // int num ;
    // printf("Enter num : ") ;
    // scanf("%d" , &num) ;
    // switch(num > 0) {
    //     case 1 :
    //         printf("Positive number") ;
    //         break ;
    //     case 0 :
    //         printf("Negative number") ;
    //         break ;
    //     default :
    //         printf("Zero") ;
    // }

// roots of quadratic equation using switch case
    // int a , b , c ;
    // printf("Enter coefficients a , b , c : ") ;
    // scanf("%d%d%d" , &a , &b , &c) ;
    // int discriminant = b * b - 4 * a * c ;
    // switch (discriminant > 0) {
    //     case 1 :
    //         printf("Two distinct real roots") ;
    //         break ;
    //     case 0 :
    //         switch (discriminant == 0) {
    //             case 1 :
    //                 printf("Two equal real roots") ;
    //                 break ;
    //             case 0 :
    //                 printf("No real roots") ;
    //                 break ;
    //         }
    //         break ;
    // }

// simple calculator using switch case
    int a , b ;
    printf("Enter two numbers : ") ;
    scanf("%d%d" , &a , &b) ;
    char op ;
    printf("Enter the operator : ") ;
    scanf(" %c" , &op) ; 
    switch(op) {
        case '+' :
            printf("%d" , a + b) ;
            break ;
        case '-' :
            printf("%d" , a - b) ;
            break ;
        case '*' :
            printf("%d" , a * b) ;
            break ;
        case '/' :
            printf("%d" , a / b) ;
            break ;
        default :
            printf("Please Enter a valid operator(+ , - , * , /) .") ;
    }
    return 0 ;
}