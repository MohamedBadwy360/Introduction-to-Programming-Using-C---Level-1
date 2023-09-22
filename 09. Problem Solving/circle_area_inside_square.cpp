#include <iostream>
using namespace std;

int main()
{
    float square_perimeter;
    cout << "Please enter the square perimeter: ";
    cin >> square_perimeter;

    const float PI = 3.14;

    float area = (PI * square_perimeter * square_perimeter) / 4;

    cout << "Area = " << area << endl;

    return 0;
}