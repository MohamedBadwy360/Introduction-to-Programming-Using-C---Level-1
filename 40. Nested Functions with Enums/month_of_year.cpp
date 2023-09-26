#include <iostream>

using namespace std;

enum enMonth {jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, jul = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12};

void show_months_menu()
{
    cout << "=========\n";
    cout << "1. January\n";
    cout << "2. February\n";
    cout << "3. March\n";
    cout << "4. April\n";
    cout << "5. May\n";
    cout << "6. June\n";
    cout << "7. July\n";
    cout << "8. August\n";
    cout << "9. September\n";
    cout << "10. October\n";
    cout << "11. November\n";
    cout << "12. December\n";
    cout << "=========\n";
}

enMonth read_month()
{
    enMonth month;

    int x;
    cout << "Enter Month Number: ";
    cin >> x;

    month = (enMonth)x;
    return month;
}

void get_month_name(enMonth month)
{
    switch (month)
    {
        case enMonth::jan:
            cout << "January";
            break;
        case enMonth::feb:
            cout << "February";
            break;
        case enMonth::mar:
            cout << "March";
            break;
        case enMonth::apr:
            cout << "April";
            break;
        case enMonth::may:
            cout << "May";
            break;
        case enMonth::jun:
            cout << "June";
            break;
        case enMonth::jul:
            cout << "July";
            break;
        case enMonth::aug:
            cout << "August";
            break;
        case enMonth::sep:
            cout << "September";
            break;
        case enMonth::oct:
            cout << "October";
            break;
        case enMonth::nov:
            cout << "November";
            break;
        case enMonth::dec:
            cout << "December";
            break;
        default:
            cout << "Wrong month";
    }

    cout << endl;
}

int main()
{
    show_months_menu();
    get_month_name(read_month());

    return 0;
}