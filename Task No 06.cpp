#include<iostream>
using namespace std;
int main()
{
    char X;
    cout<<"Enter a traffic signal Word \n R \n G \n Y :";
    cin>>X;
    switch (X)
    {
    case 'R':
        cout<<"Stop";
        break;
    case 'G':
        cout<<"Go";
        break;
    case 'Y':
        cout<<"Slow Down";
        break;
    default:
        cout<<"Please Enter Traffic Signal Words";
        break;
   }
}