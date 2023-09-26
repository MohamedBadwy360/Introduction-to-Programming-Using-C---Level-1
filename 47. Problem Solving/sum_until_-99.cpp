#include <iostream>

using namespace std;

int sum_until()
{
    int num = 0; 
    int sum = 0;
    
    while (num != -99)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num == -99)
        {
            break;
        }
        sum += num;
    }

    return sum;
}

int main()
{
    int sum = sum_until();
    cout << "Sum is: " << sum;

    return 0;
}