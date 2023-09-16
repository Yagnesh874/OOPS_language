#include <iostream>
using namespace std;

class X
{
public:
    class Y
    {
    public:
        int n;
        void getdata()
        {
            cout << "Enter the  any number ";
            cin >> n;
        }
        void putdata()
        {
            if (n % 2 == 0)
            {
                cout << "Even number ";
            }
            else
            {
                cout << "Odd number ";
            }
        }
    };
};
int main()
{
    X::Y in;
    in.getdata();
    in.putdata();
    return 0;
}