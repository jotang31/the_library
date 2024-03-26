#include "Library.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Library::printInventory() const
{
    cout << "------------ Library Inventory ------------\n" << endl;
    
    for (auto i : books)
    {
        cout << setw(23) << left << i.first;
        
        if (i.second == 2)
            cout << setw(20) << right << "on shelf" << endl;
        else if(i.second == 1)
            cout << setw(20) << right << "checked out" << endl;
        else if (i.second == 3)
            cout << setw(20) << right << "missing" << endl;
    }
    cout << "Total book count: " << books.size();
}

void Library::addBook(string nameOfBook)
{
    books[nameOfBook] = 2;
}

void Library::editBookStatus(string nameOfBook) 
{
    cout << "Please select a number:\n"
        << "1. Check out book\n"
        << "2. Return book to shelf\n"
        << "3. Report missing\n";
    int input = 0;
    cin >> input;
    switch (input)
    {
        case 1: books[nameOfBook] = 1; break;
        case 2: books[nameOfBook] = 2; break;
        case 3: books[nameOfBook] = 3; break;
        default: cerr << "Invalid input";
    }
    
}