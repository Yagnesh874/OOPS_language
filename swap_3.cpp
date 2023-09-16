#include <iostream>
using namespace std;

class C
{
public:
    int a, b, c;
    void getdata()
    {
        cout << "Enter the value of number1 : ";
        cin >> a;
        cout << "Enter the value of number2 : ";
        cin >> b;
    }
    void putdata()
    {
        cout << "Before swapping is a = " << a << "b = " << b << endl;
        c = a; // 10
        a = b; // 10,20
        b = c; //
        cout << "After swapping is a = " << a << "b = " << b << endl;
    }
};
int main()
{
    C s1;
    s1.getdata();
    s1.putdata();
    return 0;
}