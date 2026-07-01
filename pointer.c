# include<stdio.h>
int main() {
    // int a = 20 ;
    // int *ptr = &a ;
    // printf("%d\n" , a) ;
    // printf("%d\n" , &a) ;
    // printf("%d\n" , ptr) ;       // value stored at ptr i.e. address of a .
    // printf("%d\n" , &ptr) ;     // address of ptr itself in memeory .
    // printf("%d\n" , *ptr) ;    // value at address stored in ptr .
    // printf("%d\n\n" , &*ptr) ;

    // int **ptr2 = &ptr ;         // address of ptr 
    // printf("%d\n" , ptr2) ;     // address of ptr2
    // printf("%d\n" , *ptr2) ;    // value at ptr2 i.e. address of ptr
    // printf("%d\n" , **ptr2) ;   // value at (value at address stored in ptr)  i.e. value at a .


    // Pointer itself have no type .
    // int *ptr ;      // points to memory of integer type
    // char *ch_ptr ;   // points to memory of character type
    // double *d_ptr ;  // points to memory of float type

    // printf("%d %d %d" , sizeof(ptr) , sizeof(ch_ptr) , sizeof(d_ptr)) ;   // 4,4,4 for 32-bit and 8,8,8 for 64 bit .

    // int a = 13 ;
    // int *ptr = &a ;
    // *ptr = 56 ;              // Changes the value at address where pointer points to .
    // int b = *ptr + a ;       
    // printf("%d %d %d" , &a , *ptr , b) ;

    // int a = 12 ;
    // int b = 23 ;
    // int *ptr = &a ;
    // printf("%d " , *ptr) ;
    // ptr = &b ;              // in this points changes the address where it points to , firstly 'a' and now 'b' .
    // printf("%d" , *ptr) ;

                             // Types of Pointer 
    // We need to specify scale factor to the pointer when pointer is pointing to different types of variables .
    // int a = 10 ;
    // void *ptr = &a ;        // Generic pointer     
    // char ch = 'A' ;
    // printf("%d\n" , *(int*)ptr) ;
    // ptr = &ch ;
    // printf("%c" ,*(char*)ptr) ;


    // int a = 10 ;
    // int *ptr ; // Wild Pointer (Uninitialized Pointer)      // Not Prefered
    // ptr = &a ;
    // printf("%d" , *ptr) ;


    // const int a = 10 ;
    // const int *ptr = &a ;     // Pointer Pointing to constant integer .
    //  // (*ptr = 12 ;) {ERROR} 
    // printf("%d" , a) ;

    // int a = 10 ;
    // int b = 20 ;
    // int *const ptr = &a ;         // Constant Pointer (it can't point to any other location.)
    // printf("%d \n" , *ptr) ;        // 10
    // // ptr = &b ;    {Error} not modifiable .       it can't point to any other location .
    // *ptr = 45 ;             // value at 'a' can be modified because 'a' is not constant , only pointer is constant .
    // printf("%d" , *ptr) ;         // 45


    // const int a = 10 ;               // Const to Const .
    // const int *const ptr = &a ;
    // ptr = &b ;


    return 0 ;
}