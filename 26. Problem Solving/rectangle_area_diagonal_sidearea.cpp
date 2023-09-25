#include <iostream>
#include <cmath>

using namespace std;

float calculate_area(float side_area, float diagonal)
{
    float area = side_area * sqrt(pow(diagonal, 2) - pow(side_area, 2));
    return area;
}

int main()
{
    float side_area, diagonal;
    cout << "Enter Side Area of rectangle: ";
    cin >> side_area;
    cout << "Enter diagonal of rectangle: ";
    cin >> diagonal;

    cout << "Area = " << calculate_area(side_area, diagonal) << endl;


    return 0;
}