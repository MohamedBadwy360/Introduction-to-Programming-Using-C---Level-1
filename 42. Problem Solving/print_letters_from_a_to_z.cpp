#include <iostream>

using namespace std;

void show_english_letters()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

int main()
{
    show_english_letters();

    return 0;
}