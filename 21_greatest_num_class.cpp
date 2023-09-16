#include <iostream>
using namespace std;

class A
{
public:
    int a, b, c;
    void getdata()
    {
        cout << "Enter the value number A : ";
        cin >> a;
        cout << "Enter the value number B : ";
        cin >> b;
        cout << "Enter the value number C : ";
        cin >> c;
    }
    void putdata()
    {
        if(a>b && a>c)
        {
            cout<<"A is greater ";
        }
        else if (b>a && b>c)
        {
            cout<<"B is greater ";
        }
        else
        {
            cout<<"C is greater ";
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