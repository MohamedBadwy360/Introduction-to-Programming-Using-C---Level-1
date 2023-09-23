#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float square_perimeter;
    cout << "Please enter the square perimeter: ";
    cin >> square_perimeter;

    const float PI = 3.14;

    float area = (PI * pow(square_perimeter, 2)) / 4;

    cout << "Area = " << ceil(area) << endl;

    return 0;
}