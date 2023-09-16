#include <iostream>
using namespace std;

int main()
{
    int area, l, w, peri;
    cout << "enter the value of length ";
    cin >> l;
    cout << "enter the value of width ";
    cin >> w;
    area = l * w ;
    peri = 2 * (l + w) ;
    cout << "the area of number is " << area << endl;
    cout << "the value of a perameter is " << peri << endl;
}