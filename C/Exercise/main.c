#include<stdio.h>

int main() {
    int a , b , choice ;
    printf("Enter two numbers : ") ;
    scanf("%d %d" , &a , &b) ;
    printf("1. ADD\n") ;
    printf("2. SUB\n") ;
    printf("3. MUL\n") ;
    printf("4. DIV\n") ;
    printf("Enter number corresponding to choices mentioned above : ") ;
    scanf("%d" , &choice) ;

    switch(choice) {
        case 1 :
            add(a , b) ;
            break ;
        case 2 :
            sub(a , b) ;
            break;
        case 3:
            mul(a,b) ;
            break;
        case 4:
            div(a,b) ;
            break ;
        default:
            printf("Enter valid choice") ;
    }

    return 0 ;
}

#include "Add.c"
#include "sub.c"
#include "mul.c"
#include "div.c"