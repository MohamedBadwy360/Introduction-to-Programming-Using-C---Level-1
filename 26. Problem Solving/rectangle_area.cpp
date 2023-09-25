#include <iostream>
using namespace std;

float area(float length, float width)
{
    return length * width;
}

int main()
{
    float length, width;
    cout << "Please enter the length of rectangle: ";
    cin >> length;
    cout << "Please enter the width of rectangle: ";
    cin >> width; 

    cout << "Area = " << area(length, width) << endl;

    return 0;
}