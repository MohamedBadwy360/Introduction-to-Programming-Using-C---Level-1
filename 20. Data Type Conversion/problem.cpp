#include <iostream>
#include <string>
using namespace std;

int main()
{   
    // convert double to int & string
    float num1 = 55.23;

    int num2;
    string st, st1;

    num2 = int(num1);
    st = to_string(num1);
    st1 = to_string(num2);

    cout << "Num: " << num2 << endl;
    cout << "string_float: " << st << endl;
    cout << "string_int: " << st1 << endl;

    cout << "==================\n";

    // ==============================

    // convert string to numbers

    double num3 = 123.759;
    string st2;

    st2 = to_string(num3);

    cout << "String_double: " << st2 << endl;

    cout << "==================\n";

    // conert numbers to string

    string st3 = "43.23";

    int int_num = stoi(st3);
    cout << "int_num = " << int_num << endl;

    
    float float_num = stof(st3);
    cout << "float_num = " << float_num << endl;
    
    double double_num = stod(st3);
    cout << "double_num = " << double_num << endl;

    return 0;
}