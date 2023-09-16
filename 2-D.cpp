#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{3, 6, 9}, {54, 78, 65}, {53, 52, 89}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

