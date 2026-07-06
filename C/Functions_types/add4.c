// Argument with return 

#include<stdio.h>

int add() ;
int main() {
    int a = 15 ;
    int b = 25 ;
    int result = add(a , b) ;
    printf("%d" , result) ;
    return 0 ;
}

int add(int a , int b) {
    return a+b ;
}