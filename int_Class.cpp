#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void getdata()
    {
        cout << "Enter the value of A ";
        cin >> a;
        int *ip;
        ip = &a;
        cout << "value of a is ";
        cout << a << endl;
        cout << "value of ip is  :";
        cout << ip << endl;
        cout << "value of *p is  : ";
        cout << *ip << endl;
    }
};
int main()
{
    A c1;
    c1.getdata();
    return 0;
}