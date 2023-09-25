#include <iostream>
#include <cmath>

using namespace std;

float calculate_power(float number, float power)
{
    float powered_number = pow(number, power);

    return powered_number;
}

int main()
{
    float number, power;
    cout << "Please enter the number: ";
    cin >> number;
    cout << "Please enter the power: ";
    cin >> power;

    cout << "result = " << calculate_power(number, power) << endl;
    
    return 0;
}