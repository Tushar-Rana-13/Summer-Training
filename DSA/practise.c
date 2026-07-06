#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

void insertAtEnd()
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
        temp->next = start->next;
        start->next = temp;
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

int main()
{
    InsertAtBeg();
    InsertAtPos();
    insertAtEnd();

    display();

    return 0;
}
