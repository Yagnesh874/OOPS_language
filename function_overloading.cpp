#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
// volume of a cube
int volume(int a)
{
    return (a * a * a);
}
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum is 3 and 5  " << sum(3, 5) << endl;
    cout << "The sum is 3 , 5  and 7 " << sum(3, 5, 7) << endl;
    cout << "The number is 3 cube of " << volume(3) << endl;
    cout << "The number of 3  and  6 " << volume(3, 6) << endl;
    cout << "The number of 2 , 1 and 2 " << volume(2, 1, 2) << endl;
}