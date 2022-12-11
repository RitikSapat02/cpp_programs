#include<iostream>
using namespace std;
int main()
{
    int rating;
    cout<<"enter your rating (1-5): ";
    cin>>rating;

    switch(rating){
        case 1:cout<<"your rating is 1"<<endl;break;
        case 2:cout<<"your rating is 2"<<endl;break;
        case 3:cout<<"your rating is 3"<<endl;break;
        case 4:cout<<"your rating is 4"<<endl;break;
        case 5:cout<<"your rating is 5"<<endl;break;
        default :cout<<"Invalid input"<<endl;break;
    }
    return 0;
}