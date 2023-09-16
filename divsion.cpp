#include <iostream>
using namespace std;

class A
{
public:
    int divisor, diviend, reminder, quotient;
    void getdata()
    {
        cout << "Enter the value of diviend ";
        cin >> diviend;
        cout << "Enter the value of divisor ";
        cin >> divisor;
    }
    void putdata()
    {
        quotient = diviend / divisor;
        reminder = diviend % divisor;
        cout << "quotient : " << quotient << endl;
        cout << "reminder : " << reminder << endl;
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}
