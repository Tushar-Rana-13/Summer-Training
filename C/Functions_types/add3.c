// return with no argument 

# include<stdio.h>

int add() ;
int main() {
    int result = add() ;
    printf("%d" , result) ;
    return 0 ;
}

int add(){
    int a = 10 ; 
    int b = 20 ;
    return a+b ;
}