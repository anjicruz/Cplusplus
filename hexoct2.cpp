// hexoct2.cpp -- displays values in hex and octal
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;     
    int waist = 42;   
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;    // manipulator for changing the number base
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;    // manipulator for changing the number base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0; 
}
