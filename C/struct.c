# include<stdio.h>

struct student{
    int rollno ;
    char name[100] ;
    char batch[3] ;
} ;

struct person{
    char name[100] ;
    int age ;
    struct person *ptr ;
} ;

int main(){

    // struct student s1 = {101 , "Ram" , "CSE"} ;
    // printf("%d\n" , s1.rollno) ; // without pointer , while uisng name of variable created we uses '.' operator .

    // Using Pointer 
    // struct student *ptr = &s1 ;
    // printf("%d %s %s" , ptr->rollno , ptr->name , ptr->batch) ;     // with pointer we use '->' operator .
    
    // Self Refrencial pointer 
    struct person p1 = {"Rahul" , 10 ,NULL} ;
    struct person *pt1 = &p1 ;
    struct person p2 = {"Meenakshi" , 20 , NULL} ;
    p1.ptr = &p2 ;
    struct person p3 = {"Neha" , 30 ,NULL} ;
    p2.ptr = &p3 ;

    while(pt1 != NULL) {
        printf("%s %d \n" , pt1->name , pt1->age) ;
         pt1 = pt1->ptr ;
    }
    return 0 ;
}    