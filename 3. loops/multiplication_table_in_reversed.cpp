#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=10;
    while(i){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
        i--;
    }
    return 0;
}