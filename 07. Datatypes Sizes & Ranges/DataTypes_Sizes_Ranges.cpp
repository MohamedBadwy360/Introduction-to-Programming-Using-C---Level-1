#include <iostream>
#include <cfloat>
using namespace std;

int main()
{
    int v1;
    signed int v2;
    unsigned int v7;

    // ===================

    short int v3;
    short v4;

    // ===================

    unsigned short int v5;
    unsigned short v6;

    // ===================

    long v8;
    long int v9;

    // ===================

    double v10;
    long double v12;

    // ==================

    long long int v13;

    // ==================
    // =====sizeof=======

    cout << "Size of boolean: " << sizeof(bool) << " bytes\n";
    cout << "Size of integer: " << sizeof(int) << " bytes\n";
    cout << "Size of short integer: " << sizeof(short int) << " bytes\n";
    cout << "Size of long long integer: " << sizeof(long long) << " bytes\n";

    // ===== Ranges =====

    cout << "Range of char: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n"; 
    cout << "Range of INT: (" << INT_MIN << ", " << INT_MAX << ")\n"; 
    cout << "Range of Double: (" << DBL_MIN << ", " << DBL_MAX << ")\n"; 
    return 0;
}