#include<iostream>
using namespace std;
int main()
{
    int Number01;
    int Number02;
    cout<<"Eneter 1st Number :";
    cin>>Number01;
    cout<<"Enter 2nd Number :";
    cin>>Number02;
    char X;
    cout<<"Enter an operator like +,-,*,/  :";
    cin>>X;
    switch (X)
    {
    case '+':
        cout<<Number01+Number02;
        break;
    case '_':
        cout<<Number01-Number02;
        break;
    case '*':
        cout<<Number01*Number02;
        break;
    case '/':
        cout<<Number01/Number02;
        break;

    default:
        cout<<"Please Enter a correct operator";
        break;
   }
}