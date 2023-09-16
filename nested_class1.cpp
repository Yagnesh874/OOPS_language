#include<iostream>
using namespace std;

class A
{
    public:
    class B
    {
        public:
        void display()
        {
            cout<<"Nested class ";
        }
    };
};
int main()
{
    A::B in;
    in.display();
    return 0;
}