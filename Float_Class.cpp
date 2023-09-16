#include <iostream>
using namespace std;

class E
{
public:
    float a;
    void getdata()
    {
        cout << "Enter the value of A ";
        cin >> a;
        float *ip;
        ip = &a;
        cout << "Value of a is ";
        cout << a << endl;
        cout << "Value of a is ";
        cout << ip << endl;
        cout << "value of address is ";
        cout << *ip << endl;
    }
};
int main()
{
    E c1;
    c1.getdata();
    return 0;
}