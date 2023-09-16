#include<iostream>
using namespace std;

class c{
    public:
    char a;
    char *ip;
    void getdata()
    {
        cout<<"Enter the value of A ";
        cin>>a;
        ip=&a;
        cout<<"The value a is ";
        cout<<a<<endl;
        cout<<"value of p is ";
        cout<<ip<<endl;
        cout<<"The value of address is ";
        cout<<*ip;
    }
};
int main()
{
    c c1;
    c1.getdata();
    return 0;
}