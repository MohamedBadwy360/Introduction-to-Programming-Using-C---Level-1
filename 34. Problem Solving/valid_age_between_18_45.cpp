#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if ((age > 18) && (age < 45))
    {
        cout << "Valid Age.\n";
    }
    else
    {
        cout << "Inavalid Age.\n" ;
    }

    return 0;
}