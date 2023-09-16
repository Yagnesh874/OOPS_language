#include <iostream>
using namespace std;

int area(int a)
{
    return (a * a * a);
}
double area(double r)
{
    return (3.14 * r * r);
}
int area(int l, int b)
{
    return (l * b);
}
int main()
{
    int a, l, b;
    double r;
    cout << "Enter the length of a cube : ";
    cin >> a;
    cout << "Enter the length of circle : ";
    cin >> r;
    cout << "Enter the length of rectangle: ";
    cin >> l;
    cout << "Enter the width of a rectangle : ";
    cin >> b;
    cout << "The area of cube is " << area(a) << endl;
    cout << "The length of a circle is " << area(r) << endl;
    cout << "The length of a rectangle is " << area(l, b) << endl;
    return 0;
}