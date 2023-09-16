#include <iostream>
using namespace std;

class sum
{
    int a, b;

public:
    sum(int x, int y)
    {
        a = x;
        b = y;
    }
    int show()
    {
        return a + b;
        return a * b;
        return a - b;
        return a / b;
    }
};
int main()
{
    int n, a;
    cout << "Enter the any number ";
    cin >> n;
    cout << "Enter the any number ";
    cin >> a;
    sum c(n, a);
    cout << "The value of sum is " << c.show();
    return 0;
}