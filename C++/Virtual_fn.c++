// Day - 5
#include <iostream>
using namespace std;

class A
{
protected:
    int num;

public:
    void fun()
    {
        cout << "Hello ";
    }
    A(int n = 0)            // Default + parametrized constructor .
    {
        num = n;
    }
    void set(int n)
    {
        num = n;
    }
};

class B : virtual public A
{
public:
    B(int n = 0) : A(n)
    {
        cout << "B " << num << " ";
    }
};

class C : virtual public A
{
public:
    C(int n = 0) : A(n)
    {
        cout << "c " << num << " ";
    }
};

class D : public B, public C
{
public:
    D(int n = 0) : A(n), B(n), C(n)
    {
        cout << "D " << num << " ";
    }
};

int main()
{
    D d(20);
    d.fun();
    return 0;
}