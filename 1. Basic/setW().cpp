#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=6,b=765,c=86967;
    cout<<"Without using setw"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"Using setw"<<endl;
    cout<<setw(5)<<a<<endl;
    cout<<setw(5)<<b<<endl;
    cout<<setw(5)<<c<<endl;
    return 0;
}