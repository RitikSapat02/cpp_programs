#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter marks in sub1,sub2,sub3 res: ";
    cin>>a>>b>>c;
    double percent=(a+b+c)/3;
    if(a>=33 && b>=33 && c>=33 && percent>=40){
        cout<<"You are pass and you got percentage: "<<percent<<endl;
    }
    else{
        cout<<"your are fail!"<<endl;
    }
    return 0;
}