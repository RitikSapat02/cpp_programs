#include<iostream>
using namespace std;
int a=7;   //global variable
int main()
{
    cout<<a<<endl; //using global variable
    int a=8;       //Local variable
    cout<<a<<endl; //this will print local variable
     
     //Accesing global variable
     cout<<::a<<endl;

     //changing value of global variable
     ::a=9;
     cout<<::a<<endl;
    return 0;
}