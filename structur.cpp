// structur.cpp -- a simple structure
#include <iostream>
struct inflatable   // structure declaration
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value            
        29.99               // price value
    };  // guest is a structure variable of type inflatable
        // It's initialized to the indicated values
    inflatable pal =
    {
        "Audacious Anji",
        3.12,
        32.99
    };

    cout << "Expand your guest list " << guest.name << " and " << pal.name << endl;
    // pal.name is the name member of the pal variable
    cout << "You can have both for $ " << guest.price + pal.price << endl;
    return 0; 
}
