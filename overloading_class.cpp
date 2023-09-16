#include <iostream>
using namespace std;

class over
{
public:
    int a, b, c;
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    void getdata()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
        cout << "The number of sum is " << sum(a, b) << endl;
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
        cout << "Enter the value of c ";
        cin >> c;
        cout << "The  3 number of sum is  " << sum(a, b, c) << endl;
    }
};
int main()
{
    over obj;
    // obj.sum();
    obj.getdata();
    return 0;
}