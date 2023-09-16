#include<iostream>
using namespace std;

class largest
{
    public:
    int a,b,c,max;
    void getdata()
    {
        cout<<"Enter the value of a,b,c\n";
        cin>>a>>b>>c;
    }
    void cal()
    {
        max= (a>b && a>c )? (a):((b>c)? (b):(c));
    }
    void putdata()
    {
        cout<<"Largest number of is "<<max;
    }
};
int main()
{
    largest s1;
    s1.getdata();
    s1.cal();
    s1.putdata();
}