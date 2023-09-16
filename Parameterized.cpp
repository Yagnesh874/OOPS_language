#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
};  
int main()
{
    A s1(10,20);
    s1.show();
    return 0;
}