#include <iostream>
using namespace std;

int main()
{
    float number;
    cout << "Please enter the number: ";
    cin >> number;

    float power_2 = number * number;
    float power_3 = number * number * number;
    float power_4 = number * number * number * number;

    cout << "power_2 = " << power_2 << endl;
    cout << "power_3 = " << power_3 << endl;
    cout << "power_4 = " << power_4 << endl;

    return 0;
}