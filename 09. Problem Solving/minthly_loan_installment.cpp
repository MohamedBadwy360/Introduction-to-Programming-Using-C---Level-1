#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float loan_amount, months_numbers;
    cout << "Please enter loan_amount: ";
    cin >> loan_amount;
    cout << "Please enter months_numbers: ";
    cin >> months_numbers;

    cout << "Monthly Payment is: " << loan_amount / months_numbers;

    return 0;
}