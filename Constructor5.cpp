#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    char name[10];
    int sub1, sub2, sub3;
    student()
    {
        cout << "Enter the student's roll No ";
        cin >> rollno;
        cout << "Enter the student's name ";
        cin >> name;
        cout << "Enter the student's subject marks ";
        cin >> sub1;
        cout << "Enter the student's subject marks ";
        cin >> sub2;
        cout << "Enter the student's subject marks ";
        cin >> sub3;
    }
    void display()
    {
        cout << rollno << endl;
        cout << name << endl;
        cout << sub1 << endl;
        cout << sub2 << endl;
        cout << sub3 << endl;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}