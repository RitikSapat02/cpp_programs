#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 7;
    (a++ == b) ? cout << "a++ is b"<<endl : cout << "a++ is not b"<<endl;
    return 0;
}