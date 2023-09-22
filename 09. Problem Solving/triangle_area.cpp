#include <iostream>
using namespace std;

int main()
{
    float height, base;
    cout << "Please enter the height of triangle: ";
    cin >> height;
    cout << "Please enter the base of triangle: ";
    cin >> base;

    float area = 0.5 * height * base;

    cout << "Area = " << area << endl;

    return 0;
}