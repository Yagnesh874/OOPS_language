#include <iostream>
using namespace std;
int main()
{
    float b = 27.7;
    float *ip;
    ip = &b;
    cout << "Value of b is : ";
    cout << b << endl;
    cout << "value of ip is  : ";
    cout << ip << endl;
    cout << "value of *p is : ";
    cout << *ip << endl;
    return 0;
}