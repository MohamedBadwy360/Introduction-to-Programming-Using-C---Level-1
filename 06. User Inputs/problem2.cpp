#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter Number 1: \n";
    cin >> num1;
    cout << "Enter Number 2: \n";
    cin >> num2;
    cout << "Enter Number 3: \n";
    cin >> num3;

    cout << "==============\n";
    cout << num1 << " + " << endl;
    cout << num2 << " + " << endl;
    cout << num3 << " + " << endl;
    cout << "______________________\n";
    cout << "Total = " << num1 + num2 + num3 << endl;


    return 0;
}