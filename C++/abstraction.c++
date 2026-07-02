#include <iostream>
using namespace std;

class loan
{
public:
    virtual void verifydoc() = 0;
};

class homeloan : public loan
{
public:
    void verifydoc()
    {
        cout << "document verified" << endl;
    }
};
int main()
{
    homeloan h;
    h.verifydoc();

    return 0;
}