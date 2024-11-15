#include<iostream>
using namespace std;
int main()
{
    int X;
    cout<<"Enter number \n1 for Deposit \n2 for Withdraw \n3 for Check Balance \n4 for Exit :";
    cin>>X;
    switch (X)
    {
    case 1:
        cout<<"How much amount you want to Deposit :";
        int D;
        cin>>D;
        break;
    case 2:
        cout<<"How much amount you want to Withdraw :";
        int W;
        cin>>W;
        break;
    case 3:
        cout<<"Your Balance is 10000000 :";
        int B;
        cin>>B;
        break;
    case 4:
        cout<<"Exit :";
        int E;
        cin>>E;
        break;
    default:
        cout<<"Please Try Again";
        break;
   }
}