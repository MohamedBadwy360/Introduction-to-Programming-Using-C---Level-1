#include <iostream>

using namespace std;

int main()
{
    int number;
    int factorial = 1;
    cout << "Enter a positive number: ";
    cin >> number;

    while (number < 0)
    {
        cout << "Wrong Number.\n";
        cout << "Enter a positive number: ";
        cin >> number;
    }

    for (int i = number; i >= 1; i--)
    {
        factorial *= number;
        number--; 
    }
    
    cout << factorial << endl;

    return 0;
}