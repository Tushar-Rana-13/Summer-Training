#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

void InsertAtEnd()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        struct Node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void InsertAtBeg()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &temp->data);

    temp->next = start;
    start = temp;
}

void InsertAtPos()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    int pos;
    printf("Enter the value :");
    scanf("%d", &temp->data);
    temp->next = NULL;

    printf("enter the position :");
    scanf("%d", &pos);

    if (pos == 1)
    {
        temp->next = start;
        start = temp;
    }

    struct Node *ptr = start;
    for (int i = 1; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("Position out of range\n");
        free(temp);
    }
    else
    {
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void display()
{
    struct Node *temp = start;
    if (start == NULL)
    {
        printf("Empty list !");
    }

    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int count()
{
    int c = 0;
    struct Node *temp = start;
    if (start == NULL)
        return 0;

    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}

void edit()
{
    int val, pos;
    printf("Enter the value and position where you want to edit : ");
    scanf("%d %d", &val, &pos);

    struct Node *temp = start;
    int c = 1;

    while (temp != NULL && c < pos)
    {
        temp = temp->next;
        c++;
    }

    if (temp == NULL)
    {
        printf("Position out of range\n");
    }
    else
    {
        temp->data = val;
    }
}

void reverse()
{
    struct Node *prev = NULL, *curr = start, *next = NULL;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
}

int main()
{
    int choice;
    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Edit Node\n");
        printf("5. Display List\n");
        printf("6. Count Nodes\n");
        printf("7. Reverse\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            InsertAtBeg();
            break;
        case 2:
            InsertAtEnd();
            break;
        case 3:
            InsertAtPos();
            break;
        case 4:
            edit();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Total nodes = %d\n", count());
            break;
        case 7:
            reverse();
            break;
        case 8:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 8);

    return 0;
}