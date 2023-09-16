#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void PrintNumber()
    {
        cout << "The value is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point p(1, 1);
    p.PrintNumber();
    Point q(4, 6);
    q.PrintNumber();
    return 0;
}