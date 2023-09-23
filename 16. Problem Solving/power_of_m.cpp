#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number, power;
    cout << "Please enter the number: ";
    cin >> number;
    cout << "Please enter the power: ";
    cin >> power;

    float powered_number = pow(number, power);

    cout << "result = " << round(powered_number) << endl;
    
    return 0;
}