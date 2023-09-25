#include <iostream>

using namespace std;

int main()
{
    string pin;
    int balance = 7500;

    cout << "Enter your pin: ";
    cin >> pin;

    if (pin == "1234")
    {
        cout << "your balance is: " << balance << endl;
    }
    else
    {
        cout << "Wrong Pin.\n" ;
    }

    return 0;
}