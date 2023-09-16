#include <iostream>
using namespace std;

class student
{
public:
    int rollNo;
    char name[20];
    double fees;
    student()
    {
        cout << "Enter the student's roll no ";
        cin >> rollNo;
        cout << "Enter the student's name ";
        cin >> name;
        cout << "Enter the student's fees ";
        cin >> fees;
    }
    void dispaly()
    {
        cout << rollNo << "\n";
        cout << name << "\n";
        cout << fees << "\n";
    }
};
int main()
{
    student s1;
    s1.dispaly();
    return 0;
}