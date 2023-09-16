#include <iostream>
using namespace std;

class A
{
public:
    class B
    {
    public:
        int a, b, c;
        void getdata()
        {
            cout << "Enter the value of A and B " << endl;
            cin >> a >> b;
        }
        void putdata()
        {
            c = a + b;
            cout << "The addition : " << c;
        }
    };
};
int main()
{
    A::B s1;
    s1.getdata();
    s1.putdata();
    return 0;
}