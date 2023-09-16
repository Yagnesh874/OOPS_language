#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int i;
    int number[size];
    cout << "Enter 5  number : ";
    for (i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    int max, min, sum = 0;
    int choice;
    cout << "Menu:" << endl;
    cout << "1. Calculate  sum" << endl;
    cout << "2. Find minimum value" << endl;
    cout << "3. Find maximum value" << endl;
    cout << "Enter your choice(1-3) : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        for (i = 0; i < size; i++)
        {
            sum = sum + number[i];
        }
        cout << "Calculate sum: " << sum << endl;
        break;
    case 2:
        max = number[0];
        for (i = 0; i < size; i++)
        {
            if (number[i] > max)
            {
                max = number[i];
            }
        }
        cout << "Maximum values: " << max << endl;
        break;
    case 3:
        min = number[0];
        for (i = 0; i < size; i++)
        {
            if (number[i] < min)
            {
                min = number[i];
            }
        }
        cout << "Minimum value: " << min << endl;
        break;
    default:
        cout << "Invalid choice";
    }
    return 0;
}