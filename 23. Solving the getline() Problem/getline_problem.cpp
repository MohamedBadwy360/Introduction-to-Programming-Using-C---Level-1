#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;
    string name;
    string country;

    cout << "Enter Employee Number: \n";
    cin >> number;

    cout << "Enter Employee Name: \n";
    cin.ignore(1, '\n');
    getline(cin, name);

    cout << "Enter Employee Country: \n";
    cin >> country;

    cout << "Number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;

    return 0;
}