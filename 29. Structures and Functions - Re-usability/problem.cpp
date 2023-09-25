#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    string phone;
    int age;
    string city;
    string country;
    int month_salary;
    char gender;
    bool is_married;
};

void read_info(stInfo &person_info)
{
    cout << "Enter your first name: \n";
    cin >> person_info.first_name;

    cout << "Enter your last name: \n";
    cin >> person_info.last_name;

    cout << "Enter your age: \n";
    cin >> person_info.age;

    cout << "Enter your phone: \n";
    cin >> person_info.phone;

    cout << "Enter your city: \n";
    cin >> person_info.city;

    cout << "Enter your country: \n";
    cin >> person_info.country;

    cout << "Enter your month_salary: \n";
    cin >> person_info.month_salary;

    cout << "Enter your gender: \n";
    cin >> person_info.gender;

    cout << "Enter you are single(0) or married(1): \n";
    cin >> person_info.is_married;  
}

void print_info(stInfo person_info)
{
    cout << "==============\n";
    cout << "Name: " << person_info.first_name << " " << person_info.last_name << endl;
    cout << "Age: " << person_info.age << endl;
    cout << "Phone: " << person_info.phone <<endl;
    cout << "city: " << person_info.city << endl;
    cout << "Country: " << person_info.country << endl;
    cout << "Month_Salary: " << person_info.month_salary << endl;
    cout << "Yearly_Salary: " << person_info.month_salary * 12 << endl;
    cout << "Gender: " << person_info.gender << endl;
    cout << "Is Married: " << person_info.is_married << endl;
    cout << "==============\n";
}

int main()
{
    stInfo person_info;
    read_info(person_info);
    print_info(person_info);

    return 0;
}