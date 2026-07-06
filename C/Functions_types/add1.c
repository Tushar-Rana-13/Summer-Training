# include<stdio.h>
// no return no argument 
void add() ;
int main(){
    add() ;
    return 0 ;
}

void add() {
    int a = 10 ;
    int b = 20 ;
    printf("%d" , a+b) ;
}