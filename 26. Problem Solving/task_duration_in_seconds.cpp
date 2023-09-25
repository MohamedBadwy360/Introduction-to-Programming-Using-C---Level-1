#include <iostream>
using namespace std;

int calc_seconds(short seconds, short minutes, short hours, short days)
{
    int total_seconds = seconds + 60 * minutes + 60 * 60 * hours + 24 * 60 * 60 * days;
    return total_seconds;
}

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


    cout << "total seconds = " << calc_seconds(seconds, minutes, hours, days) << endl;

    return 0;
}