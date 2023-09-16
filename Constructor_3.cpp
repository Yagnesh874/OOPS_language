#include<iostream>
using namespace std;

class area
{
    public:
    float l,w,ans;
    area()
    {
        cout<<"Enter the value of length ";
        cin>>l;
        cout<<"Enter the value of width ";
        cin>>w;
    }
    void display()
    {
        ans=l*w;
        cout<<"The value of area is "<<ans;
    }
};
int main()
{
    area c1;
    c1.display();
    return 0;
}