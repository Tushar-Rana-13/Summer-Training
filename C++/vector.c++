#include <iostream>
using namespace std;

template <class T>
class vector
{
    T *ptr;
    int size;

public:
    vector(int s)
    {
        size = s;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = 0;
        }
    }

    vector(T *a, int s)
    {
        size = s;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = a[i];
        }
    }

    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    T& operator [](int index) {
        if(index < 0 || index >= size) {
            cout<<"Out of bound " ;
        }
        return ptr[index];
    }

};

int main()
{
    vector<int> v(10);
    v.show();
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v1(arr, 5);
    v1.show();
    cout<<v1[2]<<endl;

    return 0;
}