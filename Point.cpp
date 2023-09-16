#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2, distance;
    cout << "Enter the vakue of x1 and x2 " << endl;
    cin >> x1 >> x2;
    cout << "Enter the value of y1 and y2 " << endl;
    cin >> y1 >> y2;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "The value of point is " << distance;
}