#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Choose  your choice(1-7): ";
    cin>>days;
    switch(days){
        case 1: cout<<"Sunday"<<endl;
        case 2: cout<<"Monday"<<endl;
        case 3: cout<<"Tuesday"<<endl;
        case 4: cout<<"Wednesday"<<endl;
        case 5: cout<<"Thursday"<<endl;
        case 6: cout<<"Friday"<<endl;
        case 7: cout<<"Saturday"<<endl;
        default: cout<<"Invalid input"<<endl;
    }
    return 0;
}