#include <iostream>
using namespace std;

class table
{
public:
    int a, i;
    void getdata();
    void putdata();
};
void table::getdata()
{
    cout << "enter the number ";
    cin >> a;
}
void table::putdata()
{
    for (i = 1; i <= 10; i++)
    {
        cout << a << " X " << i << " = " << a * i << endl;
    }
}
int main()
{
    table s1;
    s1.getdata();
    s1.putdata();
    return 0;
}
