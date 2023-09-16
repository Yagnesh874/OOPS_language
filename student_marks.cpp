#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, pro;
    float per;
    cout << "Enter the subject 1 ";
    cin >> sub1;
    cout << "Enter the subject 2 ";
    cin >> sub2;
    cout << "Enter the subject 3 ";
    cin >> sub3;
    pro = sub1 + sub2 + sub3;
    per = (float)pro / 3;
    cout << "the total marks of " << pro << endl;
    cout << "total perchatnge is " << per << endl;
}