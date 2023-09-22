#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float loan_amount, monthly_payment;
    cout << "Please enter loan_amount: ";
    cin >> loan_amount;
    cout << "Please enter monthly_payment: ";
    cin >> monthly_payment;

    cout << "Number of Months: " << ceil(loan_amount / monthly_payment);

    return 0;
}