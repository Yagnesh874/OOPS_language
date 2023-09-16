#include <iostream>
using namespace std;

class A
{
public:
    void add(int &a, int &b)
    {
        a += b;
    }
    void mul(int &a, int &b)
    {
        a *= b;
    }
};
int main()
{
    int num1, num2;
    cout << "Enter the value of num1 ";
    cin >> num1;
    cout << "Enter the value of num2 ";
    cin >> num2;
    A math;
    math.add(num1, num2);
    cout << "sum is : " << num1 << endl;
    math.mul(num1, num2);
    cout << "Mul is : " << num1 << endl;
}