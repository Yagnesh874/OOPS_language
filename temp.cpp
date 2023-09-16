
#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenhit;
    cout << "Enter the value of fahrenhit ";
    cin >> fahrenhit;
    celsius = (fahrenhit - 32) * 5 / 9;
    cout << "The value of celsius to fahrenhit is " << celsius;
}