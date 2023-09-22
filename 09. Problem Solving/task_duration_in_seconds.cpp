#include <iostream>
using namespace std;

int main()
{
    short seconds, minutes, hours, days;
    cout << "Please enter the days: ";
    cin >> days;
    cout << "Please enter the hours: ";
    cin >> hours;
    cout << "Please enter the minutes: ";
    cin >> minutes;
    cout << "Please enter the seconds: ";
    cin >> seconds;

    int total_seconds = seconds + 60 * minutes + 60 * 60 * hours + 24 * 60 * 60 * days;

    cout << "total seconds = " << total_seconds << endl;

    return 0;
}