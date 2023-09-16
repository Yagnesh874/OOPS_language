#include <iostream>
using namespace std;

int main()
{
    float p, r, n, tot;
    cout << "enter the value of p ";
    cin >> p;
    cout << "enter the value of r ";
    cin >> r;
    cout << "enter the value of n ";
    cin >> n;
    tot = (p * r * n) / 100;
    cout << "The value of a simple interest " << tot;
}