#include <iostream>
using namespace std;

class fact
{
public:
    int n, i, *pa;
    void getdata()
    {
        int f = 1;
        cout << "Enter the value of N ";
        cin >> n;
        pa = &n;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "Factorial is " << f;
    }
};
int main()
{
    fact c1;
    c1.getdata();
}