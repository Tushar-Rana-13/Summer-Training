#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* start = nullptr;

void insertAtBeg(int val) {
    Node* temp = new Node{val, start, nullptr};
    if (start != nullptr) start->prev = temp;
    start = temp;
}

void insertAtEnd(int val) {
    Node* temp = new Node{val, nullptr, nullptr};
    if (start == nullptr) {
        start = temp;
        return;
    }
    Node* ptr = start;
    while (ptr->next != nullptr) ptr = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
}

void insertAtPos(int val, int pos) {
    Node* temp = new Node{val, nullptr, nullptr};
    if (pos == 1) {
        temp->next = start;
        if (start != nullptr) start->prev = temp;
        start = temp;
        return;
    }
    Node* ptr = start;
    for (int i = 1; i < pos - 1 && ptr != nullptr; i++) ptr = ptr->next;
    if (ptr == nullptr) {
        delete temp;
        return;
    }
    temp->next = ptr->next;
    temp->prev = ptr;
    if (ptr->next != nullptr) ptr->next->prev = temp;
    ptr->next = temp;
}

void insertAfterVal(int val, int afterval) {
    if (start == nullptr) return;
    Node* ptr = start;
    while (ptr != nullptr && ptr->data != afterval) ptr = ptr->next;
    if (ptr == nullptr) return;
    Node* temp = new Node{val, ptr->next, ptr};
    if (ptr->next != nullptr) ptr->next->prev = temp;
    ptr->next = temp;
}

void insertBeforeVal(int val, int beforeval) {
    if (start == nullptr) return;
    Node* ptr = start;
    if (ptr->data == beforeval) {
        Node* temp = new Node{val, start, nullptr};
        start->prev = temp;
        start = temp;
        return;
    }
    while (ptr != nullptr && ptr->data != beforeval) ptr = ptr->next;
    if (ptr == nullptr) return;
    Node* temp = new Node{val, ptr, ptr->prev};
    if (ptr->prev != nullptr) ptr->prev->next = temp;
    ptr->prev = temp;
}

void deleteAtBeg() {
    if (start == nullptr) return;
    Node* temp = start;
    start = temp->next;
    if (start != nullptr) start->prev = nullptr;
    delete temp;
}

void deleteAtEnd() {
    if (start == nullptr) return;
    Node* temp = start;
    if (temp->next == nullptr) {
        delete temp;
        start = nullptr;
        return;
    }
    while (temp->next != nullptr) temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
}

void edit(int pos, int val) {
    Node* temp = start;
    int c = 1;
    while (temp != nullptr && c < pos) {
        temp = temp->next;
        c++;
    }
    if (temp != nullptr) temp->data = val;
}

void reverse() {
    Node* curr = start;
    Node* temp = nullptr;
    while (curr != nullptr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != nullptr) start = temp->prev;
}

void sort() {
    if (start == nullptr) return;
    for (Node* i = start; i->next != nullptr; i = i->next) {
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (i->data > j->data) swap(i->data, j->data);
        }
    }
}

void display() {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int count() {
    int c = 0;
    Node* temp = start;
    while (temp != nullptr) {
        c++;
        temp = temp->next;
    }
    return c;
}

int main() {
    int choice, val, pos, refVal;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Insert After Value\n";
        cout << "5. Insert Before Value\n";
        cout << "6. Delete at Beginning\n";
        cout << "7. Delete at End\n";
        cout << "8. Edit Node\n";
        cout << "9. Display List\n";
        cout << "10. Count Nodes\n";
        cout << "11. Reverse List\n";
        cout << "12. Sort List\n";
        cout << "13. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                insertAtBeg(val);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> val;
                insertAtEnd(val);
                break;
            case 3:
                cout << "Enter value and position: ";
                cin >> val >> pos;
                insertAtPos(val, pos);
                break;
            case 4:
                cout << "Enter value and afterVal: ";
                cin >> val >> refVal;
                insertAfterVal(val, refVal);
                break;
            case 5:
                cout << "Enter value and beforeVal: ";
                cin >> val >> refVal;
                insertBeforeVal(val, refVal);
                break;
            case 6:
                deleteAtBeg();
                break;
            case 7:
                deleteAtEnd();
                break;
            case 8:
                cout << "Enter new value and position: ";
                cin >> val >> pos;
                edit(pos, val);
                break;
            case 9:
                display();
                break;
            case 10:
                cout << "Total nodes = " << count() << endl;
                break;
            case 11:
                reverse();
                break;
            case 12:
                sort();
                break;
            case 13:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 13);

    return 0;
}