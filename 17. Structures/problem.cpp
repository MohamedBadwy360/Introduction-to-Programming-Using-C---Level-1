#include <iostream>
using namespace std;

struct Adress
{
    string city;
    string country;
};

struct Person
{
    string name;
    int age;
    float monthly_salary;
    char gender;
    bool is_married;
    Adress address;
};

int main()
{
    Person person1;
    cout << "Please Enter Your Name: \n";
    cin >> person1.name;
    cout << "Please Enter Your Age: \n";
    cin >> person1.age;
    cout << "Please Enter Your City: \n";
    cin >> person1.address.city;
    cout << "Please Enter Your Country: \n";
    cin >> person1.address.country;
    cout << "Please Enter Your Monthly Salary: \n";
    cin >> person1.monthly_salary;
    cout << "Please Enter Your Gender: \n";
    cin >> person1.gender;
    cout << "Please Enter Are You Married 1 / 0? \n";
    cin >> person1.is_married;

    cout << "=======================\n";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << " Years" << endl;
    cout << "City: " << person1.address.city << endl;
    cout << "Country: " << person1.address.country << endl;
    cout << "Monthly Salary: " << person1.monthly_salary << endl;
    cout << "Yearly Salary: " << 12 * person1.monthly_salary << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Married: " << person1.is_married << endl;
    cout << "=======================\n";


    return 0;
}