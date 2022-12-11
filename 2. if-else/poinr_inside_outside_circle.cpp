#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, x1, y1, r;
    cout << "Enter the coordinates of center: ";
    cin >> x >> y;

    cout << "Enter the coordinates of point: ";
    cin >> x1 >> y1;

    cout << "Enter the radius of center: ";
    cin >> r;

    double distance = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    if (r > distance)
    {
        cout << "point lies inside circle" << endl;
    }
    else if (r < distance)
    {
        cout << "point lies outside te circle" << endl;
    }
    else
    {
        cout << "point lies on the circle"<< endl;
    }
    return 0;
}