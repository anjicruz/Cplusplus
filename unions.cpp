// unions.cpp
#include <iostream>
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

int main()
{
    using namespace std;
    one4all pail;
    pail.int_val = 15;          // store an int
    cout << pail.int_val;
    pail.double_val = 1.38;     // Store a double, int value is lost
    cout << pail.double_val;
    return 0; 
}
