#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if(a%2==0){
        if(a==0){
            cout<<"you entered 0"<<endl;
        }
        else{
            cout<<"Even number"<<endl;
        }
    }
    else{
        cout<<"Odd Number"<<endl;
    }
    return 0;
}