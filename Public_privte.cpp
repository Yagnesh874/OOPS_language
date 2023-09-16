#include <iostream>
using namespace std;

class employ
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void employ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employ s1;
    s1.d = 67;
    s1.e = 69;
    s1.setdata(4, 5, 6);
    s1.getdata();
    return 0;
}