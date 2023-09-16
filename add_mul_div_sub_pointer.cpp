#include <iostream>
using namespace std;

class R
{
public:
    int a, b, *ptr1, *ptr2, sum = 0;
    void add()
    {
        cout << "Enter the value of A and B ";
        cin >> a >> b;
        ptr1 = &a;
        ptr2 = &b;
        sum = *ptr1 + *ptr2;
        cout << "The value of sum is " << sum << endl;
    }
    void sub()
    {
        cout << "Enter the value of A and B ";
        cin >> a >> b;
        ptr1 = &a;
        ptr2 = &b;
        sum = *ptr1 - *ptr2;
        cout << "The value of sum is " << sum << endl;
    }
    void mul()
    {
        cout << "Enter the value of A and B ";
        cin >> a >> b;
        ptr1 = &a;
        ptr2 = &b;
        sum = *ptr1 * *ptr2;
        cout << "The value of sum is " << sum << endl;
    }
    void div()
    {
        cout << "Enter the value of A and B ";
        cin >> a >> b;
        ptr1 = &a;
        ptr2 = &b;
        sum = *ptr1 / *ptr2;
        cout << "The value of sum is " << sum << endl;
    }
};
int main()
{
    R c1;
    c1.add();
    c1.sub();
    c1.mul();
    c1.div();
}
