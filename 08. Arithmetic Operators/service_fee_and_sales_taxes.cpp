#include <iostream>
using namespace std;

int main()
{
    float bill_value;
    cout << "Please enter the bill value: ";
    cin >> bill_value;
    
    float total_bill = bill_value * 1.1;
    total_bill = total_bill * 1.16;

    cout << "Total bill = " << total_bill << endl;

    return 0;
}