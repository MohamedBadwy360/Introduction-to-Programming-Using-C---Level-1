#include <iostream>
using namespace std;

int main()
{
    string name = "Mohamed Badwy Elsaid";
    int age = 23;
    string city = "Mansoura";
    string country = "Egypt";
    float monthly_salary = 5000;
    char gender = 'M';
    bool is_married = true;

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