#include <iostream>
using namespace std;

class student
{
public:
    int rn;
    char name[10];
    double fee;
    student()
    {
        cout << "Enter the student roll number ";
        cin >> rn;
        cout << "Enter the student's name ";
        cin >> name;
        cout << "Enter the fees ";
        cin >> fee;
    }
    void display()
    {
        cout << rn << endl
             << name << endl
             << fee << endl;
    }
};

int main()
{
    student c;
    c.display();

    return 0;
}