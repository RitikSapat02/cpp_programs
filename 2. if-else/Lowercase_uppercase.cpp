#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase"<<endl;
    }
    else{
        cout<<"Not an alphabet"<<endl;
    }
    return 0;
}