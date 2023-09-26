#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;
    
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i <= number; i += 2)
    {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}