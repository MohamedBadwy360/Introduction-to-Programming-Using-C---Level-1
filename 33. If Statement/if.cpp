#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    if (x > 5)
    {
        cout << "The code of if is executed.\n";
    }

    cout << "The code after if is executed.\n";

    if (x > 5 && x < 20)
    {
        cout << "The code of if is executed.\n";
    }

    return 0;
}