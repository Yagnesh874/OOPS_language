#include <iostream>
using namespace std;

class A
{
public:
    int n, c, s, r;
    void getdata()
    {
        cout << "Enter the value of n : ";
        cin >> n;
    }
    void putdata()
    {
        c = n;//c=121
        s = 0;
        while (n > 0) // 121>0 1>0
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
            cout << "not palidrome number ";
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


