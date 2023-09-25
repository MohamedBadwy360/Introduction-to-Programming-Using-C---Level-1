#include <iostream>

using namespace std;

int main()
{
    int mark;

    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 50)
    {
        cout << "Pass.\n";
    }
    else
    {
        cout << "Fail.\n";
    }

    return 0;
}