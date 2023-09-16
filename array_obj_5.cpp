#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    char name[30];
    void getdata()
    {
        cout << "Enter the employee's id ";
        cin >> id;
        cout << "Enter the employee's name ";
        cin >> name;
    }
    void putdata()
    {
        cout << id << endl;
        cout << name << endl;
    }
};
int main()
{
    employee e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].getdata();
    }
    for (i = 0; i < 3; i++)
    {
        e[i].putdata();
    }

    return 0;
}