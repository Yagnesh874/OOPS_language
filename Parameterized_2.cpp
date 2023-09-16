#include <iostream>
using namespace std;

class cube
{
    int num;

public:
    cube(int n)
    {
        num = n;
    }
    int show()
    {
        return num * num * num;
    }
};
int main()
{
    int n;
    cout << "Enter the any number : ";
    cin >> n;
    cube c(n);
    c.show();
    cout << "The value of cube is : " << c.show();
    return 0;
}