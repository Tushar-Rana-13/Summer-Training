// Day 3 of Summer Training 

#include <stdio.h>

int main() {
    // int arr[10] ;
    // int i ;
    // int maximum ;
    // for(i = 0 ; i < 10 ; i++) {
    //     scanf("%d" , &arr[i]) ;
    // }
    // maximum = arr[0] ;
    // for (i = 1 ; i < 10 ; i++) {
    //     if(arr[i] > maximum) {
    //     maximum = arr[i] ;
    //     }
    // }
    // printf("%d " , maximum) ;

    // int arr[5] = {1, 2, 3, 4, 5} ;
    // printf("%d " , arr) ;   // arr is the address of the first element of the array
    // printf("%d " , (arr+1)) ; // arr+1 is the address of the second element of the array

    int i , j ;
    int m , n ;
    printf("Enter the number of rows : ") ;
    scanf("%d" , &m) ;
    printf("Enter the number of columns :") ;
    scanf("%d", &n) ;
    int arr[m][n] ;
    int temp[m][n] ;
    printf("Enter the array elements :\n") ;
    for(i = 0 ; i < m ; i++) {
        for (j = 0 ; j < n ; j++) {
            scanf("%d" , &arr[i][j]) ;
        }
    }
    printf("\nArray is :\n") ;
    for (i = 0 ; i < m ; i++) {
        for (j = 0 ; j < n ; j++) {
            temp[i][j] = arr[i][j] ;
            printf("%d ", temp[i][j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}     