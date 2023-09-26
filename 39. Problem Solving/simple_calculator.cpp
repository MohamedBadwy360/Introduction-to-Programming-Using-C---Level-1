#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Enter number1: ";
    cin >> num1; 
    cout << "Enter number2: ";
    cin >> num2; 
    cout << "Enter operation: ";
    cin >> operation;

    switch (operation)
    {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 *  num2 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Can't divide by zero.";
            }
            else
            {
                cout << num1 / num2 << endl;
            }
        default:
            cout << "Wrong Operation.";
    }
    
    cout << endl;

    return 0;
}