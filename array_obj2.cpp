#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    char name[20];
    void getdata()
    {
        cout << "Enter the id ";
        cin >> id;
        cout << "Enter the name ";
        cin >> name;
    }
    void putdata()
    {
        cout << "id : " << id<<endl;
        cout << "name : " << name<<endl;
    }
};
int main()
{
    employee emp[30];
    int n, i;
    cout << "enter the number of employee ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        emp[i].getdata();
        cout << "employee data : " << endl;
    }
    for (i = 0; i < n; i++)
    {
        emp[i].putdata();
    }
    return 0;
}