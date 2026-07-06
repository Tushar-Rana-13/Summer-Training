#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int num;
    struct Node *next;
};

struct Node *start = NULL;

// Function prototypes
void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atbeg();
void atend();
void atpos();
void delbeg();
void delend();
void delpos();


int main() {
    int ch1;
    char choice1 = 'y';
    do {
        printf("\n LINKED LIST PROJECT \n");
        printf("\n 1. INSERT     ");
        printf("\n 2. DISPLAY    ");
        printf("\n 3. DELETE     ");
        printf("\n 4. EDIT       ");
        printf("\n 5. COUNT NODES");
        printf("\n 6. SORTING    ");
        printf("\n 7. REVERSE    ");
        printf("\n 8. EXIT       ");
        
        ch1 = scanf("%d", &ch1);
        if (ch1 == -1) {
            printf("Invalid input, please enter a number.\n");
            continue;
        }

        switch (ch1) {
        case 1: insert(); display() ;break;
        case 2: display(); break;
       // case 3: del(); break;
       // case 4: edit(); break;
       // case 5: count(); break;
        //case 6: sort(); display(); break;
        //case 7: reverse(); display(); break;
        case 8: choice1 = 'n'; break;
        default: printf("Invalid choice\n");
        }
    } while (choice1 == 'y');
    return 0;
}

// Insert menu
void insert() {
    int ch2;
    char choice2 = 'y';
    do {
        printf("\n 1. AT BEGINNING ");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. EXIT");
        
        ch2 = scanf("%d", &ch2);
        if (ch2 == -1) {
            printf("Invalid input.\n");
            continue;
        }

        switch (ch2) {
        case 1: atbeg(); break;
        case 2: atend(); break;
        case 3: atpos(); break;
        case 4: choice2 = 'n'; break;
        default: printf("INVALID CHOICE\n");
        }
    } while (choice2 == 'y');
}

// Insert at beginning
void atbeg() {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->num = scanf("%d" , &ptr->num);
    ptr->next = start;
    start = ptr;
}

// Insert at end
void atend() {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d" , &ptr->num) ;
    ptr->next = NULL;

    if (start == NULL) {
        start = ptr;
    } else {
        struct Node *temp = start;
        while (temp->next != NULL) temp = temp->next;
        temp->next = ptr;
    }
}

// Insert at position
void atpos() {
    int pos ;
    scanf("%d" , &pos);
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d" , &ptr->num);

    if (pos == 1) {
        ptr->next = start;
        start = ptr;
        return;
    }

    struct Node *temp = start;
    for (int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(ptr);
    } else {
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

// Display list
void display() {
    struct Node *temp = start;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}
