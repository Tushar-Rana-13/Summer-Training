#include <stdio.h>

int main()
{
    int choice;

    printf("1. Read and Print Array\n");
    printf("2. Print Negative Elements\n");
    printf("3. Sum of Array Elements\n");
    printf("4. Maximum and Minimum Element\n");
    printf("5. Second Largest Element\n");
    printf("6. Count Even and Odd Elements\n");
    printf("7. Count Negative Elements\n");
    printf("8. Copy Array Elements\n");
    printf("9. Insert Element in Array\n");
    printf("10. Delete Element from Array\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q01. Write a C program to read and print elements of array.
        case 1:
        {
            int n, i, arr[100];

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Array elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;
        }

        // Q02. Write a C program to print all negative elements in an array.
        case 2:
        {
            int n, i, arr[100];

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Negative elements: ");
            for(i = 0; i < n; i++)
            {
                if(arr[i] < 0)
                    printf("%d ", arr[i]);
            }

            break;
        }

        // Q03. Write a C program to find sum of all array elements.
        case 3:
        {
            int n, i, arr[100], sum = 0;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
                sum += arr[i];
            }

            printf("Sum = %d\n", sum);
            break;
        }

        // Q04. Write a C program to find maximum and minimum element in an array.
        case 4:
        {
            int n, i, arr[100], max, min;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            max = min = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];

                if(arr[i] < min)
                    min = arr[i];
            }

            printf("Maximum = %d\n", max);
            printf("Minimum = %d\n", min);

            break;
        }

        // Q05. Write a C program to find second largest element in an array.
        case 5:
        {
            int n, i, arr[100];
            int largest, secondLargest;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            largest = secondLargest = -999999;

            for(i = 0; i < n; i++)
            {
                if(arr[i] > largest)
                {
                    secondLargest = largest;
                    largest = arr[i];
                }
                else if(arr[i] > secondLargest && arr[i] != largest)
                {
                    secondLargest = arr[i];
                }
            }

            printf("Second Largest = %d\n", secondLargest);

            break;
        }

        // Q06. Write a C program to count total number of even and odd elements in an array.
        case 6:
        {
            int n, i, arr[100];
            int even = 0, odd = 0;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                if(arr[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }

            printf("Even elements = %d\n", even);
            printf("Odd elements = %d\n", odd);

            break;
        }

        // Q07. Write a C program to count total number of negative elements in an array.
        case 7:
        {
            int n, i, arr[100], count = 0;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                if(arr[i] < 0)
                    count++;
            }

            printf("Negative elements = %d\n", count);

            break;
        }

        // Q08. Write a C program to copy all elements from an array to another array.
        case 8:
        {
            int n, i, arr1[100], arr2[100];

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr1[i]);

            for(i = 0; i < n; i++)
                arr2[i] = arr1[i];

            printf("Copied array: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr2[i]);

            break;
        }

        // Q09. Write a C program to insert an element in an array.
        case 9:
        {
            int n, i, arr[100];
            int element, pos;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter element to insert: ");
            scanf("%d", &element);

            printf("Enter position (1 to %d): ", n + 1);
            scanf("%d", &pos);

            for(i = n; i >= pos; i--)
                arr[i] = arr[i - 1];

            arr[pos - 1] = element;
            n++;

            printf("Array after insertion: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;
        }

        // Q10. Write a C program to delete an element from an array at specified position.
        case 10:
        {
            int n, i, arr[100], pos;

            printf("Enter size: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            for(i = pos - 1; i < n - 1; i++)
                arr[i] = arr[i + 1];

            n--;

            printf("Array after deletion: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}