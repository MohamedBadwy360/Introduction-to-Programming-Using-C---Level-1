#include <iostream>
using namespace std;

int main()
{
    short mark1, mark2, mark3;
    cout << "Please enter the first mark: ";
    cin >> mark1;
    cout << "Please enter the second mark: ";
    cin >> mark2;
    cout << "Please enter the third mark: ";
    cin >> mark3;

    cout << "Average of Marks = " << (mark1 + mark2 + mark3) / 3 << endl;

    return 0;
}