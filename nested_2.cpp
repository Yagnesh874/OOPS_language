#include<iostream>
using namespace std;

class A
{
    public:
    class B
    {
        public:
        float radius,area;
        void getdata()
        {
            cout<<"enter the radius of a cricle ";
            cin>>radius;
        }
        void putdata()
        {
            area=3.14*radius*radius;
            cout<<"The area of cirlce is "<<area;
        }
    };
};
int main()
{
    A::B s1;
    s1.getdata();
    s1.putdata();
    return 0;
}