// no return with argument
#include<stdio.h>

void sum();

int main() {
    int a , b ;
    printf("Enter the values of a and b : ");
    scanf("%d %d" , &a , &b) ;
    sum(a,b) ;
    return 0 ;
}

void sum(int a , int b) {
    printf("sum : %d" , a+b) ;
}