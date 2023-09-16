#include <iostream>
using namespace std;

class fact
{
public:
    int n, i, f;
    void getdata()
    {
        cout << "Enter the any number ";
        cin >> n;
    }
    void putdata()
    {
        f = 1;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "Factorial is " << f;
    }
};
int main()
{
    fact s1;
    s1.getdata();
    s1.putdata();
    return 0;
}