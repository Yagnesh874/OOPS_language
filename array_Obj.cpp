#include <iostream>
using namespace std;

class employee
{
private:
    int number;
    char firstname[20];
    char lastname[20];
    char address[20];

public:
    int numofdepartment;
    void getEmploy()
    {
        cout << "Enter the deatils of employee ";
        cout << "Enter employee nummber ";
        cin >> number;
        cout << "Enter first name ";
        cin >> firstname;
        cout << "Enter last name ";
        cin >> lastname;
        cout << "Enter the employee's address ";
        cin >> address;
        cout << "Enter the number of department ";
        cin >> numofdepartment;
    }
    void display()
    {
        cout << endl
             << "dispaly the details of employee " << endl;
        cout << endl
             << "Employee number " << number;
        cout << endl
             << "Employee's firstname " << firstname;
        cout << "\t"
             << "Employee's lastname " << lastname;
        cout << endl
             << "Employee's address " << address;
        cout << "\t"
             << "Number of department" << numofdepartment;
    }
};
int main()
{
    employee c[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        c[i].getEmploy();
    }
    cout << "Dispaly the employee who has more than or eqal 2 department";
    for (i = 0; i < 5; i++)
    {
        if (c[i].numofdepartment > 2)
        {
            c[i].display();
        }
    }
    return 0;
}