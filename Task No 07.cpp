#include<iostream>
using namespace std;
int main()
{
    int X;
    cout<<"Enter a Month 1 to 12  :";
    cin>>X;
    switch (X)
    {
    case 1:
        cout<<"January \n Winter";
        break;
    case 2:
        cout<<"Feburary \n Winter";
        break;
    case 3:
        cout<<"March \n Spring";
        break;
    case 4:
        cout<<"April \n Spring";
        break;
    case 5:
        cout<<"May \n Spring";
        break;
    case 6:
        cout<<"June \n Summer";
        break;
    case 7:
        cout<<"July \n Summer";
        break;
    case 8:
        cout<<"August \n Summer";
        break;
    case 9:
        cout<<"September \n Fall";
        break;
    case 10:
        cout<<"October \n Fall";
        break;
    case 11:
        cout<<"November \n Fall";
        break;
    case 12:
        cout<<"December \n Winter";
    default:
        cout<<"Please Enter a Month Number from 1 to 12";
        break;
   }
}