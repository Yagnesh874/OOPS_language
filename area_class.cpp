#include<iostream>
using namespace std;

class exa
{
    public:
    float l,w,tot;
    void getdata();
    void cal();
    void putdata();
};
void exa::getdata()
{
    cout<<"Enter the value of length ";
    cin>>l;
    cout<<"Enter the value of width ";
    cin>>w;
}
void exa::cal()
{
    tot = l*w;
}
void exa::putdata()
{
    cout<<"the area of value is "<<tot;
}
int main()
{
    exa si;
    si.getdata();
    si.cal();
    si.putdata();
    return 0;
}