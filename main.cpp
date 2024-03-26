#include <iostream>
#include <iomanip>

#include "Library.h"

using namespace std;

int main()
{
    Library testLibrary;
    
    cout << "\\\\\\\\\\ Library Inventory Management System /////\n\n";
    
    bool done = false;
    while(!done)
    {
        cout << "Please select an option: \n"
        << "1. View inventory\n"
        << "2. Add book to inventory\n"
        << "3. Edit book status\n"
        << "4. Exit"
        << endl;
    
        int input = 0;
        cin >> input;
        cin.ignore();
        
        switch(input)
        {
            case 1: testLibrary.printInventory(); break;
            case 2: testLibrary.addBook("hello"); break;
            case 3: testLibrary.editBookStatus("hello"); break;
            case 4: done = true; break;
            default: cerr << "Invalid selection";
        }
    }
    
    
    cout << "\nExiting Library Inventory Management System...\n\n"
        << "\\\\\\\\\\ Thank you for using the library /////" << endl;
    
    
    return 0;
}
