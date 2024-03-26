#include "Library.h"
#include <iostream>
#include <iomanip>
using namespace std;


/**
 * A helper function to obtain the title of 
 * the book from the user via the console.
 * @return the title of the book
 **/
string obtainBookTitle()
{
    cout << "Please enter the title of the book: ";
    string title;
    getline(cin, title);
    return title;
}


/**
 * Prints the title and status of all books in Inventory
 **/
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
    cout << "Total book count: " << books.size()
        << "\n-------------------------------------------\n";
}


/**
 * Adds a book to the library's inventory
 * @param the title of the book to be added
 **/
void Library::addBook(string nameOfBook)
{
    cout << "Add a book to the library! ";
    string title = obtainBookTitle();
    books[title] = 2;
    cout << title << " has been added to the library.\n\n";
}


/**
 * Edits the status of a book in the library to 
 * "checked out", "on shelf", or "missing". 
 * Validates the existence of the book in inventory.
 * @param the title of the book to be edited
 **/
void Library::editBookStatus(string nameOfBook) 
{
    cout << "Edit the status of a book! ";
    string title = obtainBookTitle();
    
    // Validate book title
    if (books.find(title) == books.end())
    {
        cerr << "This title has not been added to the library yet.\n\n";
    }
    else
    {
        cout << "Please select a number:\n"
        << "1. Check out book\n"
        << "2. Return book to shelf\n"
        << "3. Report missing\n";
        
        int input = 0;
        cin >> input;
        
        switch (input)
        {
            case 1: books[title] = 1; break;
            case 2: books[title] = 2; break;
            case 3: books[title] = 3; break;
            default: cerr << "Invalid input";
        }
    }
}
