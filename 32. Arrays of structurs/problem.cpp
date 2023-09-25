#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    int age;
    string phone;
};

void read_info(stInfo &info)
{
    cout << "Enter your first name: \n";
    cin >> info.first_name;
    cout << "Enter your last name: \n";
    cin >> info.last_name;
    cout << "Enter your age: \n";
    cin >> info.age;
    cout << "Enter your phone: \n";
    cin >> info.phone;
}

void print_info(stInfo info)
{
    cout << "Name: " << info.first_name << " " << info.last_name << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
    cout << "=========\n";
}


void read_array_data(stInfo persons[2])
{
    read_info(persons[0]);
    read_info(persons[1]);
}

void print_array_data(stInfo persons[2])
{
    print_info(persons[0]);
    print_info(persons[1]);
}

int main()
{
    stInfo persons[2];
    read_array_data(persons);
    print_array_data(persons);

    return 0;
}