#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 0; i <10; i++)
    {
        if (arr[i] == 20)
        {
            cout << "Founded at position " << i << endl;
            break;
        }
    }

    return 0;
}