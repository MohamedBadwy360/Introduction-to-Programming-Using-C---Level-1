
#include <iostream>
using namespace std;


int main()
{
    cout << "M1\M2 \n";     // \ => is a escape character
    cout << "M1\\M2 \n";    // \\ =>  print \ .
    cout << "M1\tM2\n";       // \t print tab
    cout << "My name is \"Mohamed\"\n";   // \" print "
    cout << "My name is \'Mohamed\'\n";   // \' print '
    cout << "\a";   // \a => Audio bell

    // =====================================================

    cout << "===================== Assignment =====================" << endl;
    
    // =====================================================

    // Assignment 1

    cout << "\a";

    // Assignment 2

    cout << "Dear Sir\\Mohamed\n\nHow are you?\n\nMy name is \"Mohamed\". Nice to meet you.";
    
    // Assignment 3

    cout << "\n===============================\n";

    cout << "Ali\tAhmed\tMohamed\n";
    cout << "Noha\tHanem\tSara\n";

    return 0;
}
