#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *start = NULL;

void InsertAtEnd()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;

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
        temp->prev = ptr;
    }
}

void InsertAtBeg()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &temp->data);
    temp->prev = NULL;
    temp->next = start;

    if (start != NULL)
    {
        start->prev = temp;
    }
    start = temp;
}

void InsertAtPos()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    int pos;
    printf("Enter the value :");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->prev = NULL;

    printf("enter the position :");
    scanf("%d", &pos);

    if (pos == 1)
    {
        temp->next = start;
        temp->prev = NULL;
        if (start != NULL)
        {
            start->prev = temp;
        }
        start = temp;
        return;
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
        return;
    }
    temp->next = ptr->next;
    temp->prev = ptr;
    if (ptr->next != NULL)
    {
        ptr->next->prev = temp;
    }
    ptr->next = temp;
}

void insertAfterVal()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d", &temp->data);
    int afterval;
    printf("Enter the afterVal :");
    scanf("%d", &afterval);

    if (start == NULL)
    {
        printf("List is Empty");
        free(temp);
        return;
    }

    struct Node *ptr = start;

    while (ptr->data != afterval && ptr != NULL)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("Value %d not found in the list!\n", afterval);
        free(temp);
        return;
    }
    temp->next = ptr->next;
    temp->prev = ptr;
    if (ptr->next != NULL)
    {
        ptr->next->prev = temp;
    }
    ptr->next = temp;
}

void insertBeforeVal() {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the value: ");
    scanf("%d", &temp->data);

    int beforeval;
    printf("Enter the beforeVal: ");
    scanf("%d", &beforeval);

    if (start == NULL) {
        printf("List is Empty\n");
        free(temp);
        return;
    }

    struct Node *ptr = start;

    // Case 1: Insert before head
    if (ptr->data == beforeval) {
        temp->next = start;
        temp->prev = NULL;
        start->prev = temp;
        start = temp;
        return;
    }

    // Traverse until we find beforeval
    while (ptr != NULL && ptr->data != beforeval) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value %d not found in the list!\n", beforeval);
        free(temp);
        return;
    }

    // Insert temp before ptr
    temp->next = ptr;
    temp->prev = ptr->prev;
    if (ptr->prev != NULL) {
        ptr->prev->next = temp;
    }
    ptr->prev = temp;

    printf("Inserted %d before %d\n", temp->data, beforeval);
}


void deleteAtBeg()
{
    if (start == NULL)
    {
        printf("Empty List !\n");
        return;
    }
    struct Node *temp = start;
    start = temp->next;
    if (start != NULL)
    {
        start->prev = NULL;
    }
    free(temp);
}

void deleteAtEnd()
{
    struct Node *temp = start;
    if (start == NULL)
    {
        printf("Empty List !\n");
        return;
    }
    if (temp->next = NULL)
    {
        temp = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
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

void reverse() {
    struct Node *curr = start;
    struct Node *temp = NULL;

    while (curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    if (temp != NULL) {
        start = temp->prev;  
    }
}

int main() {
    int choice;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Insert After Value\n");
        printf("5. Insert Before Value\n");
        printf("6. Delete at Beginning\n");
        printf("7. Delete at End\n");
        printf("8. Edit Node\n");
        printf("9. Display List\n");
        printf("10. Count Nodes\n");
        printf("11. Reverse List\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                insertAfterVal();
                break;
            case 5:
                insertBeforeVal();
                break;
            case 6:
                deleteAtBeg();
                break;
            case 7:
                deleteAtEnd();
                break;
            case 8:
                edit();
                break;
            case 9:
                display();
                break;
            case 10:
                printf("Total nodes = %d\n", count());
                break;
            case 11:
                reverse();
                break;
            case 12:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 12);

    return 0;
}