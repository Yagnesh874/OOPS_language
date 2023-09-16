#include <iostream>
using namespace std;

class A
{
public:
    int a, b, c;
    void getdata()
    {
        cout << "Enter the value of number 1 : ";
        cin >> a;
        cout << "Enter the value of number 2 : ";
        cin >> b;
    }
    void putdata()
    {
        cout << "The before swapping is a = " << a << " b = " << b << endl;
        c = a; // 10
        a = b; // 10,20
        b = c; // 20,10
        cout << "The after swapping is a = " << a << " b = " << b << endl;
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}