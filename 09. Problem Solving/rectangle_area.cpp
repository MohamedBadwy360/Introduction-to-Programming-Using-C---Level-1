#include <iostream>
using namespace std;

int main()
{
    float length, width;
    cout << "Please enter the length of rectangle: ";
    cin >> length;
    cout << "Please enter the width of rectangle: ";
    cin >> width;

    float area = length * width;

    cout << "Area = " << area << endl;

    return 0;
}