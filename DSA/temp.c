#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int num;
    struct Node *next;
};

struct Node *start = NULL;

// Helper: safe integer input
int getInt(const char *msg) {
    char buffer[100];
    int val;
    printf("%s", msg);
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return -1;
    if (sscanf(buffer, "%d", &val) != 1) return -1;
    return val;
}

// Insert at end
void insertEnd() {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->num = getInt("Enter data: ");
    ptr->next = NULL;

    if (start == NULL) {
        start = ptr;
    } else {
        struct Node *temp = start;
        while (temp->next != NULL) temp = temp->next;
        temp->next = ptr;
    }
}

// Display list
void display() {
    struct Node *temp = start;
    if (!temp) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (temp) {
        printf("%d -> ", temp->num);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Count nodes
void count() {
    int c = 0;
    struct Node *temp = start ;
    while(temp) {
        c++ ;
        temp = temp->next ;
    }
    printf("Total nodes : %d" , c) ;
} 

// // Sort list
// void sort() {
//     if (!start) return;
//     struct Node *i, *j;
//     int temp;
//     for (i = start; i->next != NULL; i = i->next) {
//         for (j = i->next; j != NULL; j = j->next) {
//             if (i->num > j->num) {
//                 temp = i->num;
//                 i->num = j->num;
//                 j->num = temp;
//             }
//         }
//     }
//     printf("List sorted\n");
// }

// // Reverse list
// void reverse() {
//     struct Node *prev = NULL, *curr = start, *next = NULL;
//     while (curr) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     start = prev;
//     printf("List reversed\n");
// }

int main() {
    int choice;
    char run = 'y';

    do {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Count Nodes\n");
        // printf("4. Sort\n");
        // printf("5. Reverse\n");
        printf("6. Exit\n");

        choice = getInt("Enter your choice: ");
        if (choice == -1) {
            printf("Invalid input, please enter a number.\n");
            continue;
        }

        switch (choice) {
        case 1: insertEnd(); break;
        case 2: display(); break;
        case 3: count(); break;
        // case 4: sort(); display(); break;
        // case 5: reverse(); display(); break;
        case 6: run = 'n'; break;
        default: printf("Invalid choice\n");
        }
    } while (run == 'y');

    return 0;
}
