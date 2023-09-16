#include <iostream>
using namespace std;

class a
{
public:
    int n;
    void cal()
    {
        for (n = 1; n <= 10; n++)
        {
            if (n == 6 || n == 9 || n == 5)
            {
                continue;
            }
            cout << n << endl;
        }
    }
};
int main()
{
    a s1;
    s1.cal();
}