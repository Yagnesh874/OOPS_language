#include <iostream>
using namespace std;

class pattern
{
protected:
    int i, j, n, r;

public:
    void input()
    {
        cout << "Enter the no of rows ";
        cin >> n;
    }
    friend int show(pattern);
};
int show(pattern b)
{
    for (b.i = 1; b.i <= b.n; b.i++)
    {
        for (b.j = 1; b.j <= b.i; b.j++)
        {
            cout << b.i;
        }
        cout<<endl;
    }
}
int main()
{
    pattern b;
    b.input();
    show(b);
    return 0;
}