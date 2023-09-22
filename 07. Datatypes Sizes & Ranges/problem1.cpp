#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    short int age;
    string city;
    string country;
    float monthly_salary;
    char gender;
    bool is_married;

    cout << "Please Enter Your Name: \n";
    getline(cin, name);
    cout << "Please Enter Your Age: \n";
    cin >> age;
    cout << "Please Enter Your City: \n";
    cin >> city;
    cout << "Please Enter Your Country: \n";
    cin >> country;
    cout << "Please Enter Your Monthly Salary: \n";
    cin >> monthly_salary;
    cout << "Please Enter Your Gender: \n";
    cin >> gender;
    cout << "Please Enter Are You Married 1 / 0? \n";
    cin >> is_married;

    cout << "=======================\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " Years" << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthly_salary << endl;
    cout << "Yearly Salary: " << 12 * monthly_salary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << is_married << endl;
    cout << "=======================\n";


    return 0;
}