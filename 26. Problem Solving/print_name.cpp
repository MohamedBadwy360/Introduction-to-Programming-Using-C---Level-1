#include <iostream>
#include <string>

using namespace std;

void print_name()
{
    cout << "My name is: Mohamed Badwy \n";
}

void print_name_function(string name)
{
    cout <<  "My name is: " << name << endl;
}

int main()
{
    print_name();


    string name;

    cout << "Enter your name: \n";
    getline(cin, name);
    print_name_function(name);

    return 0;
}