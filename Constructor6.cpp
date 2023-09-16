#include <iostream>
using namespace std;

class employee
{
public:
    int Empid;
    char name[10];
    int Dep_name;
    int salary;
    employee()
    {
        cout << "Enter the employee id ";
        cin >> Empid;
        cout << "Enter the employee's name ";
        cin >> name;
        cout << "Enter the emplyee's department name ";
        cin >> Dep_name;
        cout << "Enter the employee's salary ";
        cin >> salary;
    }
    void display()
    {
        cout << Empid << endl;
        cout << name << endl;
        cout << Dep_name << endl;
        cout << salary << endl;
    }
};
int main()
{
    employee s1;
    s1.display();
    return 0;
}