#include <iostream>
using namespace std;

class car
{
private:
    int carnum;
    int model;
    char company[20];
    int year;
    int price;

public:
    void getdata()
    {
        cout << "Enter the car's details ";
        cout << "Enter the car number ";
        cin >> carnum;
        cout << "Enter the car's model ";
        cin >> model;
        cout << "enter the car's company ";
        cin >> company;
        cout << "Enter the  car's year ";
        cin >> year;
        cout << "Enter the car's price ";
        cin >> price;
    }
    void putdata()
    {
        cout << "car's details is here ";
        cout << "car number " << carnum << endl;
        cout << "car's model " << model << endl;
        cout << "car's company" << company << endl;
        cout << "car's year " << year << endl;
        cout << "car's price " << price << endl;
    }
};
int main()
{
    car e[5];
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
