#include <iostream>
using namespace std;

class pali
{
public:
    int n, c, r, s;
    void getdata()
    {
        cout << "Enter any number ";
        cin >> n; // 121
    }
    void putdata()
    {
        c = n; // c= 121
        s = 0;
        while (n > 0) // 121>0 , 12>0 ,
        {
            r = n % 10;       // r = 1 , r= 2
            s = (s * 10) + r; // s=1 , s= 121
            n = n / 10;       // n=12 , n=1
        }
        if (c == s)
        {
            cout << "This is palidrome number ";
        }
        else
        {
            cout << "This is not palidrome number ";
        }
    }
};
int main()
{
    pali s1;
    s1.getdata();
    s1.putdata();
}