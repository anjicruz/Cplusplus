// arrayone.cpp -- small array of integers
#include <iostream>

int main()
{
    using namespace std;
    int yams[3];     // creates arrays with 3 elements
    yams[0] = 7;    // assigns value to the first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array
    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams cost " << yamcosts[1] << " cents per yam." << endl;
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yam arrays = " << sizeof yams << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";
    return 0; 
}
