#include <iostream>
#include <cmath>

using namespace std;

float calculate_area(float radius)
{
    const float PI = 3.14;

    float area = PI * pow(radius, 2);

    return area;
}

int main()
{
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Area = " << calculate_area(radius) << endl;


    return 0;
}