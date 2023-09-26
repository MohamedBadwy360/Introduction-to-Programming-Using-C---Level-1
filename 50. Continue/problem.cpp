#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum =0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter Number" << i << ": ";
        cin >> number;
        if (number > 50)
        {
            continue;
        }
        sum += number;
    }

    cout << sum << endl;

    return 0;
}