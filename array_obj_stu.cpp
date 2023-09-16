#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    int age;
    int height;
    int weight;
    char gender[7];

public:
    void getdata()
    {
        cout << "Enter the roll no ";
        cin >> roll;
        cout << "Enter the age ";
        cin >> age;
        cout << "Enter the height ";
        cin >> height;
        cout << "Enter the weight ";
        cin >> weight;
        cout << "Enter the gender ";
        cin >> gender;
    }
    void putdata()
    {
        cout << roll << endl;
        cout << age << endl;
        cout << height << endl;
        cout << weight << endl;
        cout << gender << endl;
    }
};
int main()
{
    student e[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        e[i].getdata();
    }
    for (i = 0; i < 2; i++)
    {
        e[i].putdata();
    }
    return 0;
}