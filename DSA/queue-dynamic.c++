#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class
class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) { // empty queue
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued into queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        cout << "Dequeued value: " << temp->data << endl;
        front = front->next;

        if (front == nullptr) { // queue became empty
            rear = nullptr;
        }
        delete temp;
    }

    // Check if empty
    bool isEmpty() {    
        return (front == nullptr);
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue contents: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code
int main() {
    Queue q;
    int choice, val;

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            q.enqueue(val);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}