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

    void enqueue()
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

    void dequeue()
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
            front++ ;
        }
        if (front > rear)
        {
            front = rear = -1;
        }
    }

    bool isfull()
    {
        if (rear == size-1)
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
        if(isEmpty()) {
            cout<<"Queue is empty!"<<endl;
            return ;
        }
        cout<<"Queue Contents: ";
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl ;
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
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. IsFull" << endl;
        cout << "4. IsEmpty" << endl;
        cout << "5. Display " << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.enqueue();
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
           cout<<(obj.isfull()?"Queue is Full":"Queue is not Full")<<endl;
            break;
        case 4:
            cout<<(obj.isEmpty()?"Queue is Empty":"Queue is not Empty")<<endl;
            break;
        case 5:
            obj.display();
            break;
        case 6:
            cout << "Exiting....." << endl;
            break;
        default:
            cout << "Invalid Choice " << endl;
        }
    } while (choice != 6);
    return 0;
}