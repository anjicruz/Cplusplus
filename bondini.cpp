// bondini.cpp -- using escape sequences
#include <iostream>

int main()
{
    using namespace std;
    cout << "\aOperation \"Hyperhype\" is now activated!\n"; 
    cout << "Enter you agent code:_________________\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "You entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0; 
}
