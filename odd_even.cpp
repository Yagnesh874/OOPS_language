#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "This number is even " << num;
    }
    else
    {
        cout << "This number is odd " << num;
    }
}