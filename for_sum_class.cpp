#include<iostream>
using namespace std;

class sum
{   
    public:
    int i,sum=0;
    void cal()
    {
        for(i=1;i<=10;i++)
        {
            sum=sum+i;
        }
         cout<<"The value of sum is "<<sum;
    
    }
};
int main()
{
    sum s1;
    s1.cal();
   return 0;
}


// #include <iostream>
// using namespace std;

// class sum
// {
// public:
//     int i, sum = 0;
//     void cal()
//     {
//         for (i = 0; i <= 10; i++)
//         {
//             sum = sum + i;
//         }
//     }
//     void putdata()
//     {
//         cout>>"th";
//     }
// };
// int main()
// {
//     sum s1;
//     s1.cal();
//     s1.putdata();
// }