#include <iostream>
using namespace std;

class MIN_MAX
{
public:
    int max(int a, int b);
    int min(int a, int b);
};
int MIN_MAX::max(int a, int b)
{
    return (a > b) ? a : b;
}
int MIN_MAX::min(int a, int b)
{
    return (a < b) ? a : b;
}
int main()
{
    int num1, num2;
    cout << "Enter the number 1 : ";
    cin >> num1;
    cout << "Enter the number 2 : ";
    cin >> num2;
    MIN_MAX obj;
    cout << "Maximum is : " << obj.max(num1, num2)<<endl;
    cout << "Minium is : " << obj.min(num1, num2)<<endl;
    return 0;
}