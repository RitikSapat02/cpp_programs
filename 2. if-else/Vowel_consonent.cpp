#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;
    int vowel=(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U');
    if(vowel){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"consonent"<<endl;
    }
    return 0;
}
