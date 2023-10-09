// modulus.cpp -- uses the % operator to convert lbs to stone
#include <iostream>

int main()
{
    using namespace std;
    const int Lbs_per_stone = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stone; // whole stone
    int pounds = lbs % Lbs_per_stone; // remainder in pounds
    cout << lbs << " pounds are " << stone << " stone " << pounds << " pound(s)" << endl;
    return 0; 
}
