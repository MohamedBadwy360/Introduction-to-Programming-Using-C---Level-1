#include <iostream>

using namespace std;

int sum_function(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;

    cout << "Please rnter the first number: " << endl;
    cin >> num1;
    
    cout << "Please rnter the second number: " << endl;
    cin >> num2;

    cout << "==================\n";
    
    cout << sum_function(num1, num2) << endl;

    return 0;
}