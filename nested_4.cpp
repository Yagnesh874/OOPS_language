#include <iostream>
using namespace std;

class M
{
public:
    class N
    {
    public:
        int a, b;
        void getdata()
        {
            cout << "Enter the number of A and B " << endl;
            cin >> a >> b;
        }
        void putdata()
        {
            cout << "Addition " << a + b << endl;
            cout << "Multification " << a * b << endl;
            cout << "subtrnaction " << a - b << endl;
            cout << "Divison " << a / b << endl;
        }
    };
};
int main()
{
    M::N s1;
    s1.getdata();
    s1.putdata();
    return 0;
}