#include<iostream>
using namespace std;

class A
{
    public:
    int i;
    void putdata()
    {
        for(i=1;i<=10;i++)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    A s1;
    s1.putdata();
   return 0;
}