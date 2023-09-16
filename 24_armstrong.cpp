#include<iostream>
using namespace std;

class A
{
public:
    int n, r, c, arm;
    void getdata()
    {
        cout << "Enter the any number ";
        cin >> n; // 153
    }
    void putdata()
    {
        c = n; // c=153
        arm = 0;
        while (n > 0) // 153>0 ,15>0 ,1>0
        {
            r = n % 10;              // r=3, r=5
            arm = (r * r * r) + arm; // arm = 27+125+1=153
            n = n / 10;              // n= 15,n=1
        }
        if (c == arm)
        {
            cout << "This number is armstrong ";
        }
        else
        {
            cout << "This is not armstrong number ";
        }
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
}