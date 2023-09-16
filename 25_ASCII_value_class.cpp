#include <iostream>
using namespace std;

class A
{
public:
    int i;
    void getdata()
    {
        cout<<"The ASCII Values of all the Characters are"<<endl;
    }
    void putdata()
    {
        for (i = 0; i <= 255; i++)
        {
            cout << "The ASCII value of " << (char) i << " = " << i << endl;
        }
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}