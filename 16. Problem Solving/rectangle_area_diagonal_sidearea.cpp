#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float side_area, diagonal;
    cout << "Enter Side Area of rectangle: ";
    cin >> side_area;
    cout << "Enter diagonal of rectangle: ";
    cin >> diagonal;

    float area = side_area * sqrt(pow(diagonal, 2) - pow(side_area, 2));

    cout << "Area = " << area << endl;


    return 0;
}