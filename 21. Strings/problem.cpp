#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string full_name, string1, string2;

    cout << "Please enter full name: \n";
    getline(cin, full_name);

    cout << "Please enter string1: \n";
    cin >> string1;
    cout << "Please enter string1: \n";
    cin >> string2;

    cout << "============\n";

    cout << "The length of full name is: " << full_name.length() << endl;

    cout << "Characters at 0, 2, 4, 7: " << full_name[0] << full_name[2] << full_name[4] << full_name[7] << endl;

    cout << "Concatenating string1 and string2: " << string1 + string2 << endl;

    int result = (stoi(string1) * stoi(string2));
    cout << string1 << " * " << string2 << " = " << result << endl; 

    cout << "============\n";

    return 0;
}