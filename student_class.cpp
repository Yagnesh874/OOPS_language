#include <iostream>
using namespace std;

class stu
{
public:
    int sub1, sub2, sub3, tot;
    float per;
    void getdata()
    {
        cout << "Enter the marks of subject 1 ";
        cin >> sub1;
        cout << "Enter the marks of subject 2 ";
        cin >> sub2;
        cout << "Enter the marks of subject 3 ";
        cin >> sub3;
    }
    void putdata()
    {

        tot = sub1 + sub2 + sub3;
        per = (float)tot / 3;
        cout << "The total subject marks is " << tot << endl;
        cout << "The total is perchatnge is " << per << endl;
    }
};
int main()
{
    stu s1;
    s1.getdata();
    s1.putdata();
}