// enums
#include <iostream>
enum Day {MON, TUE, WED, THU, FRI};

int main()
{
    using namespace std;
    Day today;
    today = WED;
    cout << "Today = " << today << endl;
    cout << "THU = " << THU << endl;
    today = static_cast<Day>(WED + THU);
    cout << "Today = " << today << endl;
    for(Day d = MON; d <= FRI; d = static_cast<Day>(d+1)) cout << d << " " << endl;
    cin.get();
    return 0; 
}
