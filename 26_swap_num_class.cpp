#include <iostream>
using namespace std;

class A
{
public:
    int m, n, a;
    void getdata()
    {
        cout << "Enter the number 1 : ";
        cin >> m;
        cout << "Enter the number 2 : ";
        cin >> n;
    }
    void putdata()
    {
        cout << "The value of a before swap is  m = " << m << " n= " << n << endl;
        a = m; // a=10
        m = n; // 10,20
        n = a; // 20,10
        cout << "The value of a after swap is m=" << m << " n= " << n << endl;
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}