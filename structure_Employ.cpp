#include <iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    person p1;
    cout << "Enter name ";
    cin >> p1.name;
    cout << "Enter the age ";
    cin >> p1.age;
    cout << "Enter the salary ";
    cin >> p1.salary;
    cout << "Name " << p1.name << endl;
    cout << "Age " << p1.age << endl;
    cout << "Salary " << p1.salary << endl;
    return 0;
}