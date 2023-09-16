#include <iostream>
using namespace std;
int main()
{
    char c;
    char *ip;
    ip = &c;
    cout << "value of c is : ";
    cout << c << endl;
    cout << "value of ip is ";
    cout << ip << endl;
    cout << "value of *ip is  : ";
    cout << *ip << endl;
    return 0;
}