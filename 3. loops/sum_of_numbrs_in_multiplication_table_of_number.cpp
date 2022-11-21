#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=10; i++){
        sum+=n*i;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}