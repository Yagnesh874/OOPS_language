#include <iostream>
using namespace std;

struct person
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    person p1;
    cout << "Enter person's id ";
    cin >> p1.id;
    cout << "Enter person's name ";
    cin >> p1.name;
    cout << "Enter person's salary ";
    cin >> p1.salary;
    cout << "id : " << p1.id << endl;
    cout << "name : " << p1.name << endl;
    cout << "salary : " << p1.salary << endl;
    return 0;
}