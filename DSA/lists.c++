#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node(int num)
    {
        this->num = num;
        next = NULL;
    }

    Node()
    {
        this->num = 0;
        next = NULL;
    }
};

Node *start = NULL;

void InsertAtBeg(int val)
{
    Node *temp = new Node(val);
    temp->next = start;
    start = temp;
}

void InsertAtEnd(int val)
{
    Node *temp = new Node(val);
    if (start == NULL)
    {
        start = temp;
        return;
    }
    Node *ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void InsertAtPos(int val, int pos)
{
    Node *temp = new Node(val);
    Node *ptr = start;

    if (pos == 0)
    {
        temp->next = start;
        start = temp;
        return;
    }
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (temp == NULL)
    {
        cout << "Out of range !";
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void edit(int val, int pos)
{
    Node *ptr = start;

    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        cout << "Out Of Range";
    }
    ptr->num = val;
}

void display()
{
    Node *temp = start;
    if (start == nullptr)
        return;
    while (temp != nullptr)
    {
        cout << temp->num << "->";
        temp = temp->next;
    }
}

void DeleteAtPos(int pos)
{
    if (start == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = start, *prev = nullptr;
    if (pos == 0)
    {
        start = start->next;
        delete temp;
        return;
    }
    for (int i = 0; i < pos && temp != nullptr; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        cout << "Out of range !";
    }
    prev->next = temp->next;
    delete temp;
}

void deleteAtBeg()
{
    if (start == nullptr)
        return;
    Node *temp = start;
    start = start->next;
    delete temp;
}

void deleteAtEnd()
{
    if (start == nullptr)
        return;

    if (start->next == nullptr)
    { // only one node
        delete start;
        start = nullptr;
        return;
    }

    Node *temp = start;
    Node *prev = nullptr;
    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = nullptr;
    delete temp;
}

void deleteBefore(int beforeval)
{
    if (start == nullptr)
        return;
    Node *temp = start;
    Node *prev = nullptr;
    while (temp->next->num != beforeval && temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "value not found !" << endl;
        return;
    }
    if (prev == nullptr)
    {
        // curr is head
        start = temp->next;
        delete temp;
    }
    else
    {
        prev->next = temp->next;
        delete temp;
    }
}

void deleteAfter(int afterVal)
{
    if (start == nullptr)
    {
        return;
    }

    Node *temp = start;

    while (temp != nullptr && temp->num != afterVal)
    {
        temp = temp->next;
    }
    if(temp == nullptr){
        cout<<"Value not found !"<<endl;
        return ;
    }
    if (temp->next == nullptr)
    {
        cout << "No Value to Delete !";
    }
    else
    {
        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
}

void before(int val, int beforeval)
{
    Node *temp = new Node(val);

    Node *curr = start;
    Node *prev = nullptr;

    while (curr->num != beforeval && curr != nullptr)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << beforeval << "not found" << endl;
    }

    prev->next = temp;
    temp->next = curr;
}

void after(int val, int afterval)
{
    Node *temp = new Node(val);

    if (start == nullptr)
    {
        cout << "list is empty!" << endl;
        delete temp;
        return;
    }

    Node *curr = start;

    while (curr->num != afterval && curr != nullptr)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        cout << "Not found" << endl;
    }
    else
    {
        temp->next = curr->next;
        curr->next = temp;
    }
}

void sort()
{
    if (!start)
        return;
    Node *i, *j;
    int temp;
    for (i = start; i->next != nullptr; i = i->next)
    {
        for (j = i->next; j != nullptr; j = j->next)
        {
            if (i->num > j->num)
            {
                temp = i->num;
                i->num = j->num;
                j->num = temp;
            }
        }
    }
}

void reverse()
{
    Node *prev = nullptr, *curr = start, *next = nullptr;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
}

int count_nodes()
{
    int count = 0;
    Node *temp = start;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    int choice, val, pos;
    do
    {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display\n";
        cout << "5. Delete at Position\n";
        cout << "6. Delete at Beginning\n";
        cout << "7. Delete at End\n";
        cout << "8. Edit at Position\n";
        cout << "9. Sort List\n";
        cout << "10. Reverse List\n";
        cout << "11. Count Nodes\n";
        cout << "12. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            InsertAtBeg(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            InsertAtEnd(val);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> val >> pos;
            InsertAtPos(val, pos);
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Enter position: ";
            cin >> pos;
            DeleteAtPos(pos);
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
            edit(val, pos);
            break;
        case 9:
            sort();
            cout << "List sorted!" << endl;
            break;
        case 10:
            reverse();
            cout << "List reversed!" << endl;
            break;
        case 11:
            cout << "Total Nodes :" << count_nodes() << endl;
        case 12:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 12);

    return 0;
}