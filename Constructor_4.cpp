#include <iostream>
using namespace std;

class test
{
public:
    void hello();
    test();
};
void test ::hello()
{
    cout << "Hello world" << endl;
}
test ::test()
{
    cout << "Consturct outside the class" << endl;
}
int main()
{
    test c;
    c.hello();
    return 0;
}