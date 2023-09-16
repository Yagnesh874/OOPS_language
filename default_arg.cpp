#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0, int w = 0)
{
    return (x + y + z + w);
}
int main()
{
    cout<<sum(5,5)<<endl;
    cout<<sum(5,5,7)<<endl;
    cout<<sum(5,5,7,8)<<endl;
    return 0;
}