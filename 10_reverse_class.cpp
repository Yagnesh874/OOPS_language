#include<iostream>
using namespace std;

class rev
{
    public:
    int n,r;
    void getdata()
    {
        cout<<"Enter the value of n ";
        cin>>n; // 542 
    }
    void putdata()
    {
        while (n>0) // 542>0 , 54>0
        {
            r=n%10; // r=2 , r=4
            cout<<r;//245
            n = n/10;//n=54 , n = 5
        }
        
    }
};
int main()
{
    rev s1;
    s1.getdata();
    s1.putdata();
   return 0;
}