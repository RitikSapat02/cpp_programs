#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"you can vote"<<endl;
    }
    else{
        cout<<"you cannot vote"<<endl;
    }
    return 0;
}