#include <iostream>
using namespace std;

class table
{
public:
    int a, i;
    void getdata()
    {
        cout << "Enter the number ";
        cin >> a;
    }
    void putdata()
    {
        for (i = 0; i <= 10; i++)
        {
            cout << a << " * " << i << " = " << a * i << endl;
        }
    }
};
int main()
{
    table s1;
    s1.getdata();
    s1.putdata();
    return 0;
}