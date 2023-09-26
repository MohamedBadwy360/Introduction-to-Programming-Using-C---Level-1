#include <iostream>

using namespace std;

int main()
{
    string pin = "1234";
    int counter = 1;

    while (counter <= 3)
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == "1234")
        {
            cout << "your balance is: 7500.\n";
            break;
        }
        else
        {
            cout << "Wrong PIN.\n";
            cout << "----------\n";
            counter++;
        }
    }

    return 0;
}