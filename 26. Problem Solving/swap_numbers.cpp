#include <iostream>
using namespace std;

void swap(short a, short b)
{
    cout << a << endl;
    cout << b << endl << endl;

    cout << b << endl;
    cout << a << endl;
}

int main()
{
    short a, b;
    cout << "Please enter the first number a: ";
    cin >> a;
    cout << "Please enter the second number b: ";
    cin >> b;

    swap(a, b);

    return 0;
}