#include <iostream>
using namespace std;

class res
{
public:
    int Rollno, sub1, sub2, sub3, tot;
    string name;
    void getdata()
    {
        cout << "Enter the roll.no ";
        cin >> Rollno;
        cout << "Enter the name ";
        cin >> name;
        cout << "Enter the marks of sub1 ";
        cin >> sub1;
        cout << "Enter the marks of sub2 ";
        cin >> sub2;
        cout << "Enter the marks of sub3 ";
        cin >> sub3;
    }
    void cal()
    {
        tot = sub1 + sub2 + sub3;
        cout << "The total subject marks is " << tot << endl;
        int grade = (float)tot / 300 * 100;
        cout << "Your grade is " << grade << endl;

        if (grade > 90)
        {
            cout << "Your grade is A " << endl;
        }
        else if (grade > 80)
        {
            cout << "Your grade is B " << endl;
        }
        else if (grade > 70)
        {
            cout << "Your grade is C " << endl;
        }
        else if (grade > 60)
        {
            cout << "Your grade is E " << endl;
        }
        else if (grade > 50)
        {
            cout << "Your grade is F " << endl;
        }
        else
        {
            cout << "You are fail " << endl;
        }
    }
};
int main()
{
    res s1;
    s1.getdata();
    s1.cal();
    return 0;
}