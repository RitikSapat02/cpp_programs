#include<iostream>
using namespace std;
int main()
{
    int x,y,x1,y1,x2,y2;
    cout<<"Enter coordinates of point: ";
    cin>>x>>y;

    cout<<"Enter coordinates of top left vertex: ";
    cin>>x1>>y1;

    cout<<"Enter coordinates of bottom right vertex: ";
    cin>>x2>>y2;

    if(x>x2 && x<x1 && y<y1 && y>y2){
        cout<<"inside"<<endl;
    }
    else{
        cout<<"Outside"<<endl;
    }
    return 0;
}