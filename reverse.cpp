#include <iostream>
using namespace std;

class rev
{
public:
    int n, r;
    void getdata()
    {
        cout << "Enter the number : ";
        cin >> n;
    }
    void putdata()
    {
        while (n > 0)
        {
            r = n % 10;
            cout << r;
            n = n / 10;
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