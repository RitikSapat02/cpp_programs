#include<iostream>
#include<string>
using namespace std;
int main()
{
    string b="Hello, ";
    string a="Ritik Sapat";

                        //Concatenation of string
    // 1)Using + operator
    cout<<b+a<<endl;

    // 2)using append()
    cout<<b.append(a)<<endl; 

                        //string Length
    // 1) length() function
    cout<<a.length()<<endl;

    // 2) size() function
    cout<<a.size()<<endl;

                        //Accessing Strings

    cout<<a[0]<<endl<<a[5]<<endl<<a[10]<<endl;

                        //change string characters
    a[0]='h';
    cout<<a<<endl;

                        //string input

    // string c;
    // cin>>c;
    // cout<<c<<endl;   //Misses the word afterspace

    string d;
    cout<<"Enter your Full Name: "<<endl;
    getline(cin,d);
    cout<<d<<endl;
    return 0;

}