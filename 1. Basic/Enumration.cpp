#include<iostream>
using namespace std;
enum man{hair,legs,hand,brain};
int main()
{
    enum feamle{longhair=7,Brain=9}f;
    f=Brain;
    man a=legs;
    cout<<a<<endl<<f<<endl;
    return 0;
}