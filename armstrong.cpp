#include<iostream>
using namespace std;

class A
{
    public:
    int arm,c,n,r;
    void getdata()
    {
        cout<<"Enter the any number ";
        cin>>n;
    }
    void putdata()
    {
        c=n;
        arm=0;
        while (n>0)
        {
            r=n%10;
            arm=(r*r*r)+arm;
            n=n/10;
        }
        if(c==arm)
        {
            cout<<"armstrong number ";
        }
        else
        {
            cout<<"Not armstrong number ";
        }
        
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}