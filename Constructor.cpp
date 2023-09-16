#include <iostream>
using namespace std;

class complex
{
public:
// Constructor is a special member function with the same name as of the class.
// It is used to initialize  the objects of its class.
// It is used automatically invoked whenever  an object is created
    int a, b;
    complex(void); // Constructor declaraction
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)//----->This is a default Constructor as it takes no perameter.
{
    a = 10;
    b = 20;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

//Characteristics of constructors

// 1.It should be declared in a public section of the class.
// 2.They are automatically invoked whenever the object is created.
// 3.They cannot return values and do not have return types.
// 4.It can have default arguments.
// 5.We cannot refer to their addresss.