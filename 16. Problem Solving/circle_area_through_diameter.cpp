#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float diameter;
    cout << "Please enter the diameter of circle: ";
    cin >> diameter;

    const float PI = 3.14;

    float area = (PI * pow(diameter, 2)) / 4;

    cout << "Area = " << ceil(area) << endl;

    return 0;
}