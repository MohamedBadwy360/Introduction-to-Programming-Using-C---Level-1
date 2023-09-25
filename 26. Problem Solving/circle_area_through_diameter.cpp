#include <iostream>
#include <cmath>
using namespace std;

float calculate_area(float diameter)
{
    const float PI = 3.14;

    float area = (PI * pow(diameter, 2)) / 4;

    return area;
}

int main()
{
    float diameter;
    cout << "Please enter the diameter of circle: ";
    cin >> diameter;

    cout << "Area = " << calculate_area(diameter) << endl;

    return 0;
}