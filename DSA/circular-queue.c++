#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front, rear;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue() {
        int val;
        cout << "Enter Value: ";
        cin >> val;

        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }

        if (front == -1) { // First element
            front = rear = 0;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0) { // Wrap around
            rear = 0;
            arr[rear] = val;
        }
        else {
            rear++;
            arr[rear] = val;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Dequeued Value: " << arr[front] << endl;

        if (front == rear) { // Only one element
            front = rear = -1;
        }
        else if (front == size - 1) { // Wrap around
            front = 0;
        }
        else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue Contents: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter size of queue: ";
    cin >> n;
    Queue obj(n);

    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. IsFull\n";
        cout << "4. IsEmpty\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            obj.enqueue();
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
            cout << (obj.isFull() ? "Queue is Full" : "Queue is not Full") << endl;
            break;
        case 4:
            cout << (obj.isEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;
            break;
        case 5:
            obj.display();
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}