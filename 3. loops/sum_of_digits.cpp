#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cin>>n;
    while(n){
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    cout<<sum<<endl;
    return 0;
}