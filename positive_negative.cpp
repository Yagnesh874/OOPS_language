#include<iostream>
using namespace std;

class pos
{
    public:
    int a;
    void getdata()
    {
        cout<<"Enter the value of a : ";
        cin>>a;
    }
    void putdata()
    {
        if(a<0)
        {
            cout<<"The number is negative ";
        }
        else if(a>0)
        {
            cout<<"The number is positive ";
        }
        else
        {
            cout<<"You enter zero ";
        }
    }
};
int main()
{
    pos s1;
    s1.getdata();
    s1.putdata();
   return 0;
}
