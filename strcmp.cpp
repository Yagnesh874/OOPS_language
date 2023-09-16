#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[] = "yagnesh", str2[] = "yagnesh", str3[] = "yaGnesh";
    int result;
    result = strcmp(str1, str2);
    cout << result << endl;
    result = strcmp(str1, str3);
    cout << result << endl;

    return 0;
}

