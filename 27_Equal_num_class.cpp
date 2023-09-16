#include <iostream>
using namespace std;

class A
{
public:
    int num1, num2;
    void getdata()
    {
        cout << "Enter number 1 :  ";
        cin >> num1;
        cout << "Enter number 2 :  ";
        cin >> num2;
    }
    void putdata()
    {
        if (num1 == num2)
        {
            cout << "They are euqal number ";
        }
        else
        {
            cout << "They are not equal number ";
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