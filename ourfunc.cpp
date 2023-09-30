// ourfunc.cpp -- defining you own functions
#include <iostream>
using namespace std; // affects all function definitions in this file

void simon(int); // function prototype for simon()

int main () 
{
    simon(3); // call the simon() function
    cout << "Pick an integer ";
    int count;
    cin >> count;
    simon(count); //call it again
    cout << "Done!" << endl;
    return 0;
}
void simon(int n) // define the simon() function
{
    // using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl; 
            // void functions do not need to return a statement
}
