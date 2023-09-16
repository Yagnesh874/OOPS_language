#include <iostream>
using namespace std;

class largest
{
public:
    int a, b, c, *pa, *pb, *pc;
    void getdata()
    {
        cout << "Enter the value of A,B and C " << endl;
        cin >> a >> b >> c;
        pa = &a;
        pb = &b;
        pc = &c;
    }
    void putdata()
    {
        if (*pa > *pb)
        {
            if (*pa > *pc)
            {
                cout << "A is largest ";
            }
            else
            {
                cout << "C is largest ";
            }
        }
        else
        {
            if (*pb > *pc)
            {
                cout << "B is  largest ";
            }
            else
            {
                cout << "C is largest ";
            }
        }
    }
};
int main()
{
    largest c1;
    c1.getdata();
    c1.putdata();
    return 0;
}