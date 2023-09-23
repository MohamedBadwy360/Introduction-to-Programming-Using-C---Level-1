#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number;
    cout << "Please enter the number: ";
    cin >> number;

    float power_2 = pow(number, 2);
    float power_3 = pow(number, 3);
    float power_4 = pow(number, 4);

    cout << "power_2 = " << round(power_2) << endl;
    cout << "power_3 = " << round(power_3) << endl;
    cout << "power_4 = " << round(power_4) << endl;

    return 0;
}