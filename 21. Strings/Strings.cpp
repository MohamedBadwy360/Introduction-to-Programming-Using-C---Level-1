#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string my_string = "abcdefghijklmnopqrstuvwxyz";
    cout << "The lenght of string = " << my_string.length() << endl;

    cout << "Indexing (c): " << my_string[2] << endl;

    string st1 = "10", st2 = "20";

    string st3 = st1 + st2;
    cout << "Concatenation: " << st3 << endl;

    int sum = stoi(st1) + stoi(st2);
    cout << "Sum = " << sum << endl; 

    cout << "=============\n";

    // =============================

    // Readline

    string full_name;

    cout << "Please Enter Full Name: \n";
    getline(cin, full_name);

    cout << full_name << endl;

    return 0;
}