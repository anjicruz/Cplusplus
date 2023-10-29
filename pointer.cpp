// pointer.cpp -- our first pointer variable
#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;        // declare a variable
    int *p_updates;        // declare a pointer to an  int (also called dereferencing)

    p_updates = &updates;   // assign address of int to a pointer
    // express values 2 ways
    cout << "Values: updates = " << updates << ", * = " << *p_updates << endl;
    // express address 2 ways
    cout << "Addresses: &updates = " << &updates << ", *p_updates = " << p_updates << endl;
    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    cin.get();
    return 0; 
}
