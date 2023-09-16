#include <iostream>
using namespace std;

class P
{
public:
    class Q
    {
    public:
        int a, b, c;
        void getdata()
        {
            cout << "Enter the value of A ,B and C " << endl;
            cin >> a >> b >> c;
        }
        void putdata()
        {
            if (a > b)
            {
                if (a > c)
                {
                    cout << "A is largest ";
                }
                else
                {
                    cout << "C is largest ";
                }
            }
            if (b > c)
            {
                cout << "B is largest ";
            }
            else
            {
                cout << "C is largest ";
            }
        }
    };
};
int main()
{
    P::Q s1;
    s1.getdata();
    s1.putdata();
    return 0;
}