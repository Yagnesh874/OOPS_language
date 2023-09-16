#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Enter the opertaions +,-,/,* ";
    cin >> op;
    cout << "Enter the  first number ";
    cin >> num1;
    cout << "enter the second number ";
    cin >> num2;
    switch (op)
    {
    case '+':
        cout << " Addition of num1 and num2 is " << num1 + num2;
        break;

    case '-':
        cout << "Substarction of num1 and num2 is " << num1 - num2;
        break;

    case '/':
        cout << "divsion of num1 and num2 is " << num1 / num2;
        break;

    case '*':
        cout << "multification of num1 and num2 is " << num1 * num2;
        break;

    default:
        cout << "error ! wrong operators";
        break;
    }
}