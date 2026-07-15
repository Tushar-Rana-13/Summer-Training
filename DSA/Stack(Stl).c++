#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    cout << "Stack elements (top → bottom): ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    if (s.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack size: " << s.size() << endl;

    return 0;
}
