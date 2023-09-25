#include <iostream>
#include <cmath>

using namespace std;

float calculate_area(float square_perimeter)
{
    const float PI = 3.14;

    float area = (PI * pow(square_perimeter, 2)) / 4;

    return area;
}

int main()
{
    float square_perimeter;
    cout << "Please enter the square perimeter: ";
    cin >> square_perimeter;

    cout << "Area = " << calculate_area(square_perimeter) << endl;

    return 0;
}