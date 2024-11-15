#include<iostream>
using namespace std;
int main()
{
    char X;
    cout<<"Enter a Grade Character:";
    cin>>X;
    switch (X)
    {
    case 'A':
        cout<<"Excellent";
        break;
    case 'B':
        cout<<"Good";
        break;
    case 'C':
        cout<<"Average";
        break;
    case 'D':
        cout<<"Pass";
        break;
    case 'F':
        cout<<"Fail";
        break;
    default:
        cout<<"Please Enter the Correct Grade Character";
        break;
   }
}