#include <iostream>
using namespace std;

int main()
{
    float total_bill, cash_paid;
    cout << "Please enter the total bill: ";
    cin >> total_bill;
    cout << "Please enter the cash paid: ";
    cin >> cash_paid;

    cout << "Remainder = " << cash_paid - total_bill << endl;

    return 0;
}