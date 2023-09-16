#include <iostream>
using namespace std;

class pali
{
public:
    int r, n, c, s;
    void getdata()
    {
        cout << "Enter the any number ";
        cin >> n;
    }
    void putdata()
    {
        c = n;
        s = 0;
        while(n>0)
        {
            r = n % 10;
            s = (s * 10) + r;
            n = n / 10;
        }
        if (c == s)
        {
            cout << "palidrome number ";
        }
        else
        {
            cout << "Not palidrome number ";
        }
    }
};
int main()
{
    pali s1;
    s1.getdata();
    s1.putdata();
    return 0;
}