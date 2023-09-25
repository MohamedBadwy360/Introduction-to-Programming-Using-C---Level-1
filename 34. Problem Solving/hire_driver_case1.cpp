#include <iostream>

using namespace std;

int main()
{
    int age;
    bool license;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter 1 if you have a license and 0 if not: ";
    cin >> license;

    if ((age > 21) && license)
    {
        cout << "Hired.\n";
    }
    else
    {
        cout << "Rejected.\n";
    }

    return 0;
}