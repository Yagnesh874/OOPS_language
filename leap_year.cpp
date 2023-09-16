

#include <iostream>
using namespace std;

class leap
{
public:
    int year;
    void getdata()
    {
        cout << "Enter the year ";
        cin >> year;
    }
    void putdata()
    {
        if (year % 4 == 0)
        {
            cout << "leap year ";
        }
        else
        {
            cout << "not leap year ";
        }
    }
};
int main()
    {
        leap s1;
        s1.getdata();
        s1.putdata();
        return 0;
    }