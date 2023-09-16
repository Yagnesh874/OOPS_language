#include <iostream>
using namespace std;

class simple
{
public:
    float p, r, n, si;
    void getdata()
    {
        cout << " Eter the value of p ";
        cin >> p;
        cout << " Eter the value of r ";
        cin >> r;
        cout << " Eter the value of n ";
        cin >> n;
    }
    void cal()
    {
        si = (p * r * n) / 100;
    }
    void putdata()
    {
        cout << "The value of simple interest is " << si;
    }
};
int main()
{
    simple a1;
    a1.getdata();
    a1.cal();
    a1.putdata();
}