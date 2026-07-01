#include <stdio.h>

int main()
{
    int choice;


    switch(choice)
    {
        // Q1. Write a C program to count frequency of each element in an array.
        case 1:
        {
            int n, arr[100], freq[100] = {0};
            int i, j;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                if(freq[i] == -1)
                    continue;

                freq[i] = 1;

                for(j = i + 1; j < n; j++)
                {
                    if(arr[i] == arr[j])
                    {
                        freq[i]++;
                        freq[j] = -1;
                    }
                }
            }

            printf("Element : Frequency\n");
            for(i = 0; i < n; i++)
            {
                if(freq[i] != -1)
                    printf("%d : %d\n", arr[i], freq[i]);
            }
            break;
        }

        // Q2. Write a C program to print all unique elements in the array.
        case 2:
        {
            int n, arr[100];
            int i, j, count;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Unique Elements: ");

            for(i = 0; i < n; i++)
            {
                count = 0;

                for(j = 0; j < n; j++)
                {
                    if(arr[i] == arr[j])
                        count++;
                }

                if(count == 1)
                    printf("%d ", arr[i]);
            }
            break;
        }

        // Q3. Write a C program to count total number of duplicate elements in an array.
        case 3:
        {
            int n, arr[100];
            int i, j, count = 0;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(arr[i] == arr[j])
                    {
                        count++;
                        break;
                    }
                }
            }

            printf("Total duplicate elements = %d\n", count);
            break;
        }

        // Q4. Write a C program to delete all duplicate elements from an array.
        case 4:
        {
            int n, arr[100];
            int i, j, k;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                for(j = i + 1; j < n;)
                {
                    if(arr[i] == arr[j])
                    {
                        for(k = j; k < n - 1; k++)
                            arr[k] = arr[k + 1];

                        n--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }

            printf("Array after removing duplicates:\n");

            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;
        }

        // Q5. Write a C program to merge two array to third array.
        case 5:
        {
            int n1, n2, arr1[100], arr2[100], arr3[200];
            int i;

            scanf("%d", &n1);

            for(i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);

            scanf("%d", &n2);

            for(i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);

            for(i = 0; i < n1; i++)
                arr3[i] = arr1[i];

            for(i = 0; i < n2; i++)
                arr3[n1 + i] = arr2[i];

            printf("Merged Array:\n");

            for(i = 0; i < n1 + n2; i++)
                printf("%d ", arr3[i]);

            break;
        }

        // Q6. Write a C program to find reverse of an array.
        case 6:
        {
            int n, arr[100];
            int i;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("Reverse Array:\n");

            for(i = n - 1; i >= 0; i--)
                printf("%d ", arr[i]);

            break;
        }

        // Q7. Write a C program to put even and odd elements of array in two separate array.
        case 7:
        {
            int n, arr[100], even[100], odd[100];
            int i, e = 0, o = 0;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                if(arr[i] % 2 == 0)
                    even[e++] = arr[i];
                else
                    odd[o++] = arr[i];
            }

            printf("Even Array: ");
            for(i = 0; i < e; i++)
                printf("%d ", even[i]);

            printf("\nOdd Array: ");
            for(i = 0; i < o; i++)
                printf("%d ", odd[i]);

            break;
        }

        // Q8. Write a C program to search an element in an array.
        case 8:
        {
            int n, arr[100], key;
            int i, found = 0;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            scanf("%d", &key);

            for(i = 0; i < n; i++)
            {
                if(arr[i] == key)
                {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Element not found\n");

            break;
        }

        // Q9. Write a C program to sort array elements in ascending or descending order.
        case 9:
        {
            int n, arr[100];
            int i, j, temp, order;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("1. Ascending\n2. Descending\n");
            scanf("%d", &order);

            for(i = 0; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if((order == 1 && arr[i] > arr[j]) ||
                       (order == 2 && arr[i] < arr[j]))
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            printf("Sorted Array:\n");

            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;
        }

        // Q10. Write a C program to sort even and odd elements of array separately.
        case 10:
        {
            int n, arr[100];
            int even[100], odd[100];
            int e = 0, o = 0;
            int i, j, temp;

            scanf("%d", &n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            for(i = 0; i < n; i++)
            {
                if(arr[i] % 2 == 0)
                    even[e++] = arr[i];
                else
                    odd[o++] = arr[i];
            }

            for(i = 0; i < e - 1; i++)
            {
                for(j = i + 1; j < e; j++)
                {
                    if(even[i] > even[j])
                    {
                        temp = even[i];
                        even[i] = even[j];
                        even[j] = temp;
                    }
                }
            }

            for(i = 0; i < o - 1; i++)
            {
                for(j = i + 1; j < o; j++)
                {
                    if(odd[i] > odd[j])
                    {
                        temp = odd[i];
                        odd[i] = odd[j];
                        odd[j] = temp;
                    }
                }
            }

            printf("Sorted Even Elements: ");
            for(i = 0; i < e; i++)
                printf("%d ", even[i]);

            printf("\nSorted Odd Elements: ");
            for(i = 0; i < o; i++)
                printf("%d ", odd[i]);

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}