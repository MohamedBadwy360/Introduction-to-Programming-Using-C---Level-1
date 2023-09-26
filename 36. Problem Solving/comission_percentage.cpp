#include <iostream>

using namespace std;

int main()
{
    float total_salary;

    cout << "Enter grade: ";
    cin >> total_salary;

    if (total_salary > 1000000)
    {
        cout << 0.01 * total_salary << endl;
    }
    else if (total_salary > 500000 && total_salary <= 1000000)
    {
        cout << 0.02 * total_salary << endl;
    }
    else if (total_salary > 100000 && total_salary <= 500000)
    {
        cout << 0.03 * total_salary << endl;
    }
    else if (total_salary > 50000 && total_salary <= 100000)
    {
        cout << 0.05 * total_salary << endl;
    }
    else 
    {
        cout << 0 << endl;
    }

    return 0;
}