#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    int age;
    string phone;
};

void read_persons_info(stInfo persons[100], int &length)
{
    cout << "Enter number of persons: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Enter Person[" << i+1 << "] first name: ";
        cin >> persons[i].first_name;
        cout << "Enter Person[" << i+1 << "] last name: ";
        cin >> persons[i].last_name;
        cout << "Enter Person[" << i+1 << "] age: ";
        cin >> persons[i].age;
        cout << "Enter Person[" << i+1 << "] phone: ";
        cin >> persons[i].phone;
    }
}

void print_persons_info(stInfo persons[100], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        cout << "Person[" << i+1 << "] first name: " << persons[i].first_name << endl;
        cout << "Person[" << i+1 << "] last name: " << persons[i].last_name << endl;
        cout << "Person[" << i+1 << "] age: " << persons[i].age << endl;
        cout << "Person[" << i+1 << "] phone: " << persons[i].phone << endl;
        cout << "=================\n";
    }
}


int main()
{
    stInfo persons[100];
    int length;

    read_persons_info(persons, length);
    cout << "=================\n";
    print_persons_info(persons, length);

    return 0;
}