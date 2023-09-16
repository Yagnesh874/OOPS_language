#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    int choice;
    cout<<"Menu:"<<endl;
    cout<<"1. Maximum"<<endl;
    // cout<<"2. Minimum"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        if(num1>num2){
            cout<<"Number 1 is maximum";
        }
        else{
            cout<<"Number 2 is maximum";
        }
        break;
    default: cout<<"Invalid choice";
    break;
    }
    return 0;
}