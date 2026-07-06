// Left rotate an array 

# include<stdio.h>

void reversal(int arr[] , int start , int end) {
    while(start < end) {
        int temp = arr[start] ;
        arr[start] = arr[end] ;
        arr[end] = temp ;
        start++ ; 
        end-- ;
}
} ;

void LeftRotate(int arr[] , int d , int n) {
    d = d % n ;
    reversal(arr , 0 , d-1) ;
    reversal(arr , d , n-1) ;
    reversal(arr , 0 , n-1) ;
}

void RightRotate(int arr[] , int d , int n) {
    d = d % n ;
    reversal(arr , n-d , n-1) ;
    reversal(arr , 0 , n-d-1) ;
    reversal(arr , 0 , n-1) ;
}

int main() {

    // int arr[] = {1 ,2 , 3 , 4, 5} ;
    // int i = 0 ;
    // int n = sizeof(arr) / sizeof(arr[0]) ;
    // LeftRotate(arr , 1 , n) ;
    // for(i = 0 ; i < n ; i++){
    //     printf("%d " , arr[i]) ;
    // }
    // printf("\n") ;

    // RightRotate(arr , 1 , n) ;
    // for(i = 0 ; i < n ; i++){
    //     printf("%d " , arr[i]) ;
    // }
    // printf("\n") ;


// Adding two metrices .
    int m , n ;
    printf("Enter the number of rows and columns : ") ;
    scanf("%d %d" , &m , &n) ;

    int matrix1[m][n] , matrix2[m][n] , sum[m][n] , subtract[m][n] ;

    printf("Elements of matrix1 : ") ;
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            scanf("%d" , &matrix1[i][j]) ;
        }
    }

     printf("Elements of matrix2 : ") ;
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++) {
            scanf("%d" , &matrix2[i][j]) ;
        }
    }

    // for(int i = 0 ; i < m ; i++) {
    //     for(int j = 0 ; j < n ; j++) {
    //         sum[i][j] = matrix1[i][j] + matrix2[i][j] ;
    //     }
    // }

    // for(int i = 0 ; i < m ; i++) {
    //     for(int j = 0 ; j < n ; j++) {
    //         printf("%d " , sum[i][j]) ;
    //     }
    //     printf("\n") ;
    // }

// SUBTRACT TWO METRICES 
    // for(int i = 0 ; i < m ; i++) {
    //     for(int j = 0 ; j < n ; j++) {
    //         subtract[i][j] = matrix1[i][j] - matrix2[i][j] ;
    //     }
    // }

    // for(int i = 0 ; i < m ; i++) {
    //     for(int j = 0 ; j < n ; j++) {
    //         printf("%d " , subtract[i][j]) ;
    //     }
    //     printf("\n") ;
    // }


    return 0 ;
}