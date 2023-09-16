#include <iostream>
using namespace std;

class A
{
public:
    int divisor, diviend, quotiens, reminder;
    void getdata()
    {
        cout << "Enter the diviend and divisor " << endl;
        cin >> diviend >> divisor;
    }
    void putdata()
    {
        quotiens = diviend / divisor;
        reminder = diviend % divisor;
        cout << "quetions : " << quotiens<<endl;
        cout << "reminder : " << reminder<<endl;
    }
};
int main()
{
    A s1;
    s1.getdata();
    s1.putdata();
    return 0;
}