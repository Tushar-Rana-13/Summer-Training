// Assignment - 4 

# include<stdio.h>
# include<math.h>

int main() {

// 1. C Program to check whether number is positive, negative or zero .
    // int num ;
    // printf("Enter a number : ") ;
    // scanf("%d" , &num) ;
    // if (num < 0) {
    //     printf("%d is a negative number\n" , num) ;
    // } else if (num > 0) {
    //     printf("%d is a positive number\n" , num) ;
    // } else {
    //     printf("number is zero") ;
    // }

// 2. C program to check if number is positive or negative 
    // int num ;
    // printf("Enter a number :") ;
    // scanf("%d" , &num) ;
    // if (num % 2 == 0) {
    //     printf("%d is an even number ." , num) ;
    // } else {
    //     printf("%d is an odd number." , num) ;
    // }

// 3. C program to check if input is number , character or special symbol .
    //  char input ;
    //  printf("Enter an input :") ;
    //  scanf(" %c" , &input) ;
    //  if(input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z') {
    //     printf("%c is an alphabet" , input) ;
    //  } else if (input == '&' || input == '@' || input == '$' || input == '#') {
    //     printf("%c is a special character" , input) ;
    //  } else {
    //     printf("input is number") ;
    //  }

// 4. Write a C program to check whether a character is uppercase or lowercase alphabet.
    //   char input ;
    //   printf("Enter an alphabet : ") ;
    //   scanf("%c" , &input) ;
    //   if (input >= 'a' & input <= 'z') {
    //     printf("%c is lowercase." , input) ;
    //   } else {
    //     printf("%c is Uppercase." , input) ;
    //   }

// 5. Write a C program to enter month number and print total number of days in month. (Excluding Leap Year).
    // int month ;
    // printf("enter month number : ") ;
    // scanf("%d" , &month) ;
    // if (month == 2) {
    //     printf("Total number of days in %d month is 28" , month) ;
    // } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    //     printf("Total number of days in %d month is 31." , month) ;
    // } else {
    //     printf("Total number of days in %d month is 30." , month) ;
    // }

// 6. Write a C program to input angles of a triangle and check whether triangle is valid or not.
    // float a , b , c ;
    // printf("Enter the angles of triangle : ") ;
    // scanf("%f%f%f" , &a , &b , &c) ;
    // if (a + b + c != 180){
    //     printf("Triangle can't have %f %f %f as angles ." , a , b , c) ;
    // } else {
    //     printf("Triangle is Valid .") ;
    // }

// 7.Write a C program to find all roots of a quadratic equation.
    // double a , b , c ;
    // printf("Enter value of a,b,c : ") ;
    // scanf("%lf %lf %lf" , &a , &b , &c) ;
    // double discriminant = (b*b) -( 4*a*c) ;
    // double root1 , root2 ;
    //  if (discriminant > 0) {
    //     root1 = (-b + sqrt(discriminant)) / (2*a) ;
    //     root2 = (-b - sqrt(discriminant)) / (2*a) ;
    //     printf("Roots are %.2f , %.2f ." , root1 , root2) ;
    //  }  else if (discriminant == 0) {
    //     root1 = root2 = -b / (2*a) ;
    //     printf("Roots are %.2f %.2f : " , root1 , root2) ;
    //  } else {
    //     double realPart = -b / (2*a) ;
    //     double imaginaryPart = sqrt(-discriminant) / (2*a) ;

    //     printf("Roots are %.2f + %.2fi && %.2f - %.2fi ." , realPart , imaginaryPart , realPart , imaginaryPart) ;
    //  }

// 8. Write a C program to check whether triangle is equilateral, scalene or isosceles Input: all side's length.
    //   int a , b , c ;
    //   printf("Enter the sides of triangle : " ) ;
    //   scanf("%d%d%d" , &a , &b , &c) ;
    //   if (a == b && b == c) {
    //     printf("Triangle is Equilateral .") ;
    //   } else if (a == b || b == c || a == c) {
    //     printf("Triangle is Isosceles .") ;
    //   } else {
    //     printf("Triangle is Scalene .") ;   
    //   }

// 9. Write a C program to input electricity unit charges and calculate total electricity bill according to the
    // given condition:
    // For first 50 units Rs. 0.50/unit
    // For next 100 units Rs. 0.75/unit
    // For next 100 units Rs. 1.20/unit
    // For unit above 250 Rs. 1.50/unit
    // An additional surcharge of 20% is added to the bill
     
    // int charge ;
    // printf("Enter the electricity unit charges : ") ;
    // scanf("%d" , &charge) ;
    //     double bill ;
    //     if (charge <= 50) {
    //         bill = charge * 0.50 ;
    //     } else if (charge <= 150) {
    //         bill = (50 * 0.50) + ((charge - 50) * 0.75) ;
    //     } else if (charge <= 250) {
    //         bill = (50 * 0.50) + (100 * 0.75) + ((charge - 150) * 1.20) ;
    //     } else {
    //         bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((charge - 250) * 1.50) ;
    //     }
    //     double totalBill = bill + (bill * 0.20) ;
    //     printf("Total electricity bill is : %.2f" , totalBill) ;

// 10. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
    
    // int p , c , b , m , comp ;
    // printf("Enter the marks for all 5 subjects : ") ;
    // scanf("%d%d%d%d%d" , &p , &c , &b , &m , &comp) ;
    // int totalMarks = p + c + b + m + comp ;
    // double percentage = (totalMarks / 500.0) * 100 ;
    // char grade ;
    // if (percentage >= 90) {
    //     printf("Grade : A") ;
    // } else if (percentage >= 80) {
    //     printf("Grade : B") ;
    // } else if (percentage >= 70) {
    //     printf("Grade : C") ;
    // } else if (percentage >= 60) {
    //     printf("Grade : D") ;
    // } else if (percentage >= 40) {
    //     printf("Grade : E") ;
    // } else {
    //     printf("Grade : F") ;
    // }
    return 0 ;
}