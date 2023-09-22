#include <iostream>
using namespace std;

int main()
{
    int total_seconds;
    cout << "Please enter total seconds: ";
    cin >> total_seconds;

    int seconds_per_day = 24 * 60 * 60;
    short int seconds_per_hour = 60 * 60;
    short int seconds_per_minute = 60;

    // calculate days
    int days = total_seconds / seconds_per_day;
    short remainder = total_seconds % seconds_per_day;

    // calculate hours
    short hours = remainder / seconds_per_hour;
    remainder = remainder % seconds_per_hour;

    // calculate minutes
    short minutes = remainder / seconds_per_minute;

    // calculate seconds
    short seconds = remainder % seconds_per_minute;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}