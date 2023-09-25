#include <iostream>

using namespace std;

void swap_numbers(int &num1, int &num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swap in procedure: \n";
    cout << num1 << endl;
    cout << num2 << endl;
}

int main()
{
    int num1, num2;
    
    cout << "Please enter number1: \n";
    cin >> num1;

    cout << "Please enter number2: \n";
    cin >> num2;

    cout << "Before swap: \n";
    cout << num1 << endl;
    cout << num2 << endl;

    swap_numbers(num1, num2);

    cout << "=============\n";
    cout << "After swap in main: \n";
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}
