#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q1. Write a C program to find first and last digit of a number.
        case 1:
        {
            int num, first, last;

            printf("Enter a number: ");
            scanf("%d", &num);

            last = num % 10;

            while(num >= 10)
                num /= 10;

            first = num;

            printf("First digit = %d\n", first);
            printf("Last digit = %d\n", last);
            break;
        }

        // Q2. Write a C program to find sum of first and last digit of a number.
        case 2:
        {
            int num, first, last;

            printf("Enter a number: ");
            scanf("%d", &num);

            last = num % 10;

            while(num >= 10)
                num /= 10;

            first = num;

            printf("Sum = %d\n", first + last);
            break;
        }

        // Q3. Write a C program to swap first and last digits of a number.
        case 3:
        {
            int num, temp, first, last, digits = 0;
            int middle, swapped;

            printf("Enter a number: ");
            scanf("%d", &num);

            temp = num;
            last = num % 10;

            while(temp >= 10)
            {
                temp /= 10;
                digits++;
            }

            first = temp;

            int power = pow(10, digits);

            middle = (num % power) / 10;

            swapped = last * power + middle * 10 + first;

            printf("After swapping = %d\n", swapped);
            break;
        }

        // Q4. Write a C program to calculate sum of digits of a number.
        case 4:
        {
            int num, sum = 0;

            printf("Enter a number: ");
            scanf("%d", &num);

            while(num > 0)
            {
                sum += num % 10;
                num /= 10;
            }

            printf("Sum of digits = %d\n", sum);
            break;
        }

        // Q5. Write a C program to calculate product of digits of a number.
        case 5:
        {
            int num, product = 1;

            printf("Enter a number: ");
            scanf("%d", &num);

            while(num > 0)
            {
                product *= num % 10;
                num /= 10;
            }

            printf("Product of digits = %d\n", product);
            break;
        }

        // Q6. Write a C program to check whether a number is Prime number or not.
        case 6:
        {
            int num, i, prime = 1;

            printf("Enter a number: ");
            scanf("%d", &num);

            if(num <= 1)
                prime = 0;

            for(i = 2; i <= num / 2; i++)
            {
                if(num % i == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if(prime)
                printf("Prime Number\n");
            else
                printf("Not Prime Number\n");

            break;
        }

        // Q7. Write a C program to print all Prime numbers between 1 to n.
        case 7:
        {
            int n, i, j, prime;

            printf("Enter n: ");
            scanf("%d", &n);

            printf("Prime numbers are: ");

            for(i = 2; i <= n; i++)
            {
                prime = 1;

                for(j = 2; j <= i / 2; j++)
                {
                    if(i % j == 0)
                    {
                        prime = 0;
                        break;
                    }
                }

                if(prime)
                    printf("%d ", i);
            }

            printf("\n");
            break;
        }

        // Q8. Write a C program to find sum of all prime numbers between 1 to n.
        case 8:
        {
            int n, i, j, prime;
            int sum = 0;

            printf("Enter n: ");
            scanf("%d", &n);

            for(i = 2; i <= n; i++)
            {
                prime = 1;

                for(j = 2; j <= i / 2; j++)
                {
                    if(i % j == 0)
                    {
                        prime = 0;
                        break;
                    }
                }

                if(prime)
                    sum += i;
            }

            printf("Sum = %d\n", sum);
            break;
        }

        // Q9. Write a C program to find all prime factors of a number.
        case 9:
        {
            int num, i, j, prime;

            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Prime factors are: ");

            for(i = 2; i <= num; i++)
            {
                if(num % i == 0)
                {
                    prime = 1;

                    for(j = 2; j <= i / 2; j++)
                    {
                        if(i % j == 0)
                        {
                            prime = 0;
                            break;
                        }
                    }

                    if(prime)
                        printf("%d ", i);
                }
            }

            printf("\n");
            break;
        }

        // Q10. Write a C program to check whether a number is Armstrong number or not.
        case 10:
        {
            int num, temp, digits = 0;
            int rem, sum = 0;

            printf("Enter a number: ");
            scanf("%d", &num);

            temp = num;

            while(temp > 0)
            {
                digits++;
                temp /= 10;
            }

            temp = num;

            while(temp > 0)
            {
                rem = temp % 10;
                sum += pow(rem, digits);
                temp /= 10;
            }

            if(sum == num)
                printf("Armstrong Number\n");
            else
                printf("Not an Armstrong Number\n");

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}