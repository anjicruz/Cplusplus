// numstr.cpp -- following number input with line input
#include <iostream>

int main()
{
    using namespace std;
    cout << "What your was your house built in?\n";
    int year;
    cin >> year;
    cin.get(); // make the calls separetly
    cout << "What is the street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0; 
}
