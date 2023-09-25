#include <iostream>

using namespace std;

int main()
{
    float mark1, mark2, mark3;

    cout << "Enter your mark1: ";
    cin >> mark1;
    cout << "Enter your mark2: ";
    cin >> mark2;
    cout << "Enter your mark3: ";
    cin >> mark3;

    float average = (mark1 + mark2 + mark3) / 3;

    if (average >= 50)
    {
        cout << average << endl;
        cout << "Pass.\n";
    }
    else
    {
        cout << average << endl;
        cout << "Fail.\n";
    }

    return 0;
}