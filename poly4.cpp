// to illustreate reinterpret_cast operator
#include <iostream>
using namespace std;

int main()
{

    int *ptr = new int(20);
    cout << "First Value: " << *ptr << endl;
    void *ptr2 = reinterpret_cast<void *>(ptr);
    // cout<<"Second value: "<<*ptr2<<endl;
    int *ptr3 = reinterpret_cast<int *>(ptr);
    cout << "final value: " << *ptr << endl;
    return 0;
}