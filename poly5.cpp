// to illustrate use typeid() and dynamic_cast operator
#include <iostream>
using namespace std;
class base
{
public:
    virtual void Print()
    {
        cout << "From base class " << endl;
    }
};
class derived : public base
{
public:
    void Print()
    {
        cout << "From derived class" << endl;
    }
};
int main()
{
    cout << typeid(5).name() << endl;
    cout << typeid(2.2).name() << endl;
    base *b1 = new base();
    base *d1 = new derived();
    base *ptr;
    ptr = d1;
    cout << typeid(*b1).name() << endl;
    cout << typeid(*d1).name() << endl;
    // cout << typeid(*ptr).name() << end;
    if (typeid(*ptr) == typeid(derived))
        cout << "\nptr has derived object. " << endl;
    derived *ptr1 = dynamic_cast<derived *>(d1);
    if (ptr1)
        cout << "\nptr has derived object. " << endl;
    return 0;
}