#include <iostream>
using namespace std;

class number
{
private:
    int n;

public:
    void setnumber(int num)
    {
        n = num;
    }
    bool iseven()
    {
        return (n % 2 == 0);
    }
};
int main()
{
    number num;
    int n;
    cout << "Enter the value of number ";
    cin >> n;
    num.setnumber(n);
    if (num.iseven())
    {
        cout << "It is even number ";
    }
    else
    {
        cout << "It is odd number ";
    }
    return 0;
}