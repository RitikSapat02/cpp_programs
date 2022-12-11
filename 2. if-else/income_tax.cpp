#include<iostream>
using namespace std;
int main()
{
    int income;
    float tax=0;
    cout<<"Enter your income: ";
    cin>>income;

    if(income>=250000 && income<=500000){
        tax=tax+0.5*(income-250000);
    }

    if(income>500000 && income<=1000000){
        tax=tax+0.2*(income-500000);
    }

    if(income>1000000){
        tax=tax+0.3*(income-1000000);
    }

    cout<<"income Tax:"<<tax<<endl;
    return 0;
}