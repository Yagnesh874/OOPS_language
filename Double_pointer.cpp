#include<iostream>
using namespace std;
int main()
{
    double a = 2.5;
    double *ip;
    ip = &a;
    cout<<"The value of a : ";
    cout<<a<<endl;
    cout<<"Value of *ip is : ";
    cout<<ip<<endl;
    cout<<"value of *p  is : ";
    cout<<*ip<<endl;

    return 0;
}