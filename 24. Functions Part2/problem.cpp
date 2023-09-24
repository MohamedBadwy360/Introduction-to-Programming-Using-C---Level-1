#include <iostream>

using namespace std;

void sum_procedure()
{
    int num1, num2;

    cout << "Please rnter the first number: " << endl;
    cin >> num1;
    
    cout << "Please rnter the second number: " << endl;
    cin >> num2;

    cout << "==================\n";

    cout << num1 + num2 << endl;
}

int sum_function()
{
    int num1, num2;

    cout << "Please rnter the first number: " << endl;
    cin >> num1;
    
    cout << "Please rnter the second number: " << endl;
    cin >> num2;

    cout << "==================\n";

    return num1 + num2;
}

int main()
{
    sum_procedure();
    cout << sum_function() << endl;

    return 0;
}