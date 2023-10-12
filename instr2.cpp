// instr2.cpp -- reading more than one word with getline
#include <iostream>

int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name:\n";
    cin.getline(name, Arsize);  // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, Arsize);
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0; 
}
