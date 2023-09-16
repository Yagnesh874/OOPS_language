#include <iostream>
using namespace std;

class pri
{
public:
    int n, i, count;
    void getdata()
    {
        cout << "Enter any number ";
        cin >> n;
    }
    void putdata()
    {
        count = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << "This is prime number";
        }
        else
        {
            cout << "This is not prime number ";
        }
    }
};
int main()
{
    pri s1;
    s1.getdata();
    s1.putdata();
    return 0;
}