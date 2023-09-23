#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;
    cout << "Enter radius of rectangle: ";
    cin >> radius;

    const float PI = 3.14;

    float area = PI * pow(radius, 2);

    cout << "Area = " << ceil(area) << endl;


    return 0;
}