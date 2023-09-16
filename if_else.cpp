#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "you eligble for vote";
    }
    else
    {
        cout << "not eligble for vote";
    }
}