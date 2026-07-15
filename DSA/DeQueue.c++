#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int size;
    int front = -1, rear = -1;

public:
    queue(int s)
    {
        size = s;
        arr = new int[size];
    }

    void enqueueAtRear()
    {
        int val;
        cout << "Enter Value : ";
        cin >> val;
        if (rear == -1 || front == -1)
        {
            arr[++rear] = val;
            front++;
        }
        else
        {
            arr[++rear] = val;
        }
    }

    void enqueueAtFront()
    {
        int val;
        cout << "Enter a val : ";
        cin >> val;
        if (rear == -1 || front == -1)
        {
            arr[++rear] = val;
            front++;
        }
        else if (front == 0)
        {
            cout << "Val cannot be pushed.";
            return;
        }
        else
        {
            arr[--front] = val;
        }
    }

    void dequeueAtFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty.";
            return;
        }
        else
        {
            cout << "Dequed Value : ";
            cout << arr[front];
            front++;
        }
        if (front > rear)
        {
            front = rear = -1;
        }
    }

    void dequeueAtRear() {
        if(front == -1) {
            cout<<"queue is empty!";
            return ;
        } else {
            cout<<"Dequed value at rear is ";
            cout<<arr[rear--]<<endl;
        }
        if(front > rear) {
            front = rear = -1 ;
        }
    }

    bool isfull()
    {
        if (rear == size - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue Contents: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    int n;
    cout << "Enter size of queue.";
    cin >> n;
    queue obj(n);

    int choice;
    do
    {
        cout << "Choose an option." << endl;
        cout << "1. EnqueueAtRear" << endl;
        cout << "2. EnqueueAtFront" << endl;
        cout << "3. DequeueAtFront" << endl;
        cout << "4. DequeueAtRear" << endl;
        cout << "5. IsFull" << endl;
        cout << "6. IsEmpty" << endl;
        cout << "7. Display " << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.enqueueAtRear();
            break;
        case 2:
            obj.enqueueAtFront();
            break;
        case 3:
            obj.dequeueAtFront();
            break;
        case 4:
            obj.dequeueAtRear();
            break;
        case 5:
            cout << (obj.isfull() ? "Queue is Full" : "Queue is not Full") << endl;
            break;
        case 6:
            cout << (obj.isEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;
            break;
        case 7:
            obj.display();
            break;
        case 8:
            cout << "Exiting....." << endl;
            break;
        default:
            cout << "Invalid Choice " << endl;
        }
    } while (choice != 8);
    return 0;
}