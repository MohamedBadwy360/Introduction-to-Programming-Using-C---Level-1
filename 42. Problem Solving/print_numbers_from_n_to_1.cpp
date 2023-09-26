#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = number; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}