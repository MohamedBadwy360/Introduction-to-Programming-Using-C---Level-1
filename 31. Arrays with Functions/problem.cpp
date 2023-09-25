#include <iostream>

using namespace std;

void read_array_data(float grades[3])
{
    cout << "Enter grade1: \n";
    cin >> grades[0];
    cout << "Enter grade2: \n";
    cin >> grades[1];
    cout << "Enter grade3: \n";
    cin >> grades[2];
}

void print_array_data(float grades[3])
{
    cout << "===========\n";
    float average = (grades[0] + grades[1] + grades[2]) / 3.0;
    cout << "Average = " << average << endl;
}

int main()
{
    float grades[3];

    read_array_data(grades);
    print_array_data(grades);
    
    return 0;
}