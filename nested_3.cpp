#include <iostream>
using namespace std;

class B
{
public:
    class C
    {
    public:
        int a, b;
        void getdata()
        {
            cout << "Enter the value of number ";
            cin >> a;
        }
        void putdata()
        {
            b = a * a * a;
            cout << "The value of cube is " << b;
        }
    };
};
int main()
{
    B::C s1;
    s1.getdata();
    s1.putdata();
    return 0;
}