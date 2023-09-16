#include <iostream>
using namespace std;

class employee
{
public:
    // int empNO;
    int id;
    char name[30];
    void getdata();
    void putdata();
};
void employee::getdata()
{
    // cout<<"Enter the number of employee ";
    // cin>>empNO;
    cout << "Enter id ";
    cin >> id;
    cout << "Enter the name of employee ";
    cin >> name;
}
void employee::putdata()
{
    // cout<<"Number of employee"<<empNO<<endl;
    cout << id << " " << endl;
    cout << name << " " << endl;
}
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