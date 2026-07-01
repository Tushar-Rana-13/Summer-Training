// Dynamic Memory Allocation
# include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    int roll_no ;
    char name[10] ;
};

int main() {
    // int *ptr = (int*)malloc(4) ; // space of 4 byte created in heap memory which is generally of void type when created but it is typecasted to int as it is stored in pointer of type int .
    // *ptr = 23 ;
    // printf("%d %d %d" , &ptr , ptr , *ptr) ;


    // struct student *ptr = (struct student*)malloc(sizeof(struct student)) ;
    // ptr->roll_no = 13 ;
    // strcpy(ptr->name , "Mbappe") ;

    // printf("%d %s" , ptr->roll_no , ptr->name) ;

    // int *ptr = (int*)malloc(20) ;
    // int i ;
    // ptr[0] = 7 ;        // Array Notation
    // *(ptr+1) = 10 ;     // Pointer notation
    // for(i = 0 ; i < 5 ; i++) {
    //     printf("%d\n" , ptr[i]) ;
    // }


// Calloc allocates multiple blocks 
// Syntax :    calloc(number of block , size of each block) 


int *ptr = (int*)malloc(5*sizeof(int)) ;
int i = 0 ;
for(i = 0 ; i < 5 ; i++) {
    printf("%d\n" , ptr[i]) ;
}

int *ptr2 = (int*)calloc(5 , sizeof(int)) ;
for(i = 0 ; i < 10 ; i++) {
    printf("%d\n" , ptr2[i]) ;
}

ptr2 = (int*)realloc(ptr2 , 10*sizeof(int)) ;
for(i = 0 ; i < 10 ; i++){
    printf("%d\n" , ptr2[i]) ;
}
// free(ptr)  -> deallocates memory .
    return 0 ;
}