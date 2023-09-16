#include <iostream>
using namespace std;

class A
{
public:
    char op;
    float a, b;
    void getdata()
    {
        cout << "Enter the operter +,/,*,- ";
        cin >> op;
        cout << "Enter the value of A ";
        cin >> a;
        cout << "Enter the value of B ";
        cin >> b;
    }
    void putdata()
    {
        switch (op)
        {
        case '+':
            cout << "Addition of a and b is " << a + b;
            break;
        case '-':
            cout << "Substraction of a and b is " << a - b;
            break;
        case '/':
            cout << "divison of a and b is " << a / b;
            break;
        case '*':
            cout << "multification of a and b is " << a * b;
            break;
        default:
            cout << "wrong operator ";
            break;
        }
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}