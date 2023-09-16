#include<iostream>
using namespace std;
class A
{
    public:
    class B
    {
        int a,b;
        public:
        void input()
        {
            cout<<"Enter the vallue of  a ";
            cin>>a;
            cout<<"Enter the value of b ";
            cin>>b;
        }
        void show()
        {
            cout<<a<<" "<<endl;
            cout<<b<<" "<<endl;
        }
    };
    
};
int main()
{
    A::B obj;
    obj.input();
    obj.show();
    return 0;
}