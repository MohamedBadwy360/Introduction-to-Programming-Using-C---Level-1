#include <iostream>
using namespace std;

int main()
{
    float diameter;
    cout << "Please enter the diameter of circle: ";
    cin >> diameter;

    const float PI = 3.14;

    float area = (PI * diameter * diameter) / 4;

    cout << "Area = " << area << endl;

    return 0;
}