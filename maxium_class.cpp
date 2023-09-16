#include<iostream>
using namespace std;

class max1
{
    public:
    int a,b,c,max2;
    void getdata();
    void cal();
    void putdata();
};
void max1:: getdata()
{
    cout<<"enter the value of A";
    cin>>a;
     cout<<"enter the value of B";
    cin>>b;
     cout<<"enter the value of C";
    cin>>c;
} 
void max1:: cal()
{
        if(a>b)
        {
            if(a>c)
            {
                max2=a;
            }
            else
            {
                max2=c;
            }
        }
        else
        {
            if(b>c)
            {
                max2=b;
            }
            else
            {
                max2=c;
            }
        }
        void pudata();
        {
            cout<<"The value of maximun number is "<<max2;
        }
        
}
int main()
{
    max1 s1;
    s1.getdata();
    s1.cal();
    s1.putdata();
    return 0;

}    
   