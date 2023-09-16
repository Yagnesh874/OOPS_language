#include <iostream>
using namespace std;

class B
{
public:
    int a, b, *temp;
    void getdata()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the valu of b ";
        cin >> b;
        *temp = a;
        a = b;
        b = *temp;
        cout << "After swapping = " << a << "nb = " << b;
    }
};
int main()
{
    B c1;
    c1.getdata();
    return 0;
}