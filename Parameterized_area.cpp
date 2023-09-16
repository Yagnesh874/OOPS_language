#include <iostream>
using namespace std;

class area
{
    float r;

public:
    area(float n)
    {
        r = n;
    }
    float show()
    {
        return (3.14 * r * r);
    }
};
int main()
{
    float n;
    cout << "Enter the any number  ";
    cin >> n;
    area s1(n);
    s1.show();
    cout << "The value of circle is " << s1.show();
    return 0;
}