#include <iostream>
using namespace std;

class exa
{
public:
    float fernhit, celsuis;
    void getdata();
    void tot();
    void putdata();
};
void exa::getdata()
{
    cout << "Enter the value of fernhit ";
    cin >> fernhit;
}
void exa::tot()
{
    celsuis = (fernhit - 32) * 5 / 9;
}
void exa::putdata()
{
    cout << "The value of celsuis is " << celsuis;
}
int main()
{
    exa e1;
    e1.getdata();
    e1.tot();
    e1.putdata();
}
