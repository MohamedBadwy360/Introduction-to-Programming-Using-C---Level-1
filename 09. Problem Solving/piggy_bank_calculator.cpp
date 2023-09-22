#include <iostream>
using namespace std;

int main()
{
    short penny, nickle, dime, quarter, dollar;
    cout << "Please enter the penny: ";
    cin >> penny;
    cout << "Please enter the nickle: ";
    cin >> nickle;
    cout << "Please enter the dime: ";
    cin >> dime;
    cout << "Please enter the quarter: ";
    cin >> quarter;
    cout << "Please enter the dollar: ";
    cin >> dollar;

    short total_pennies = penny + 5 * nickle + 10 * dime + 25 * quarter + 100 * dollar;
    float total_dollars = total_pennies / 100.0;

    cout << "total_pennies = " << total_pennies << endl;
    cout << "total_dollars = " << total_dollars << endl;

    return 0;
}