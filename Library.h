#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <map>

class Library
{
public:
    void printInventory() const;
    void addBook(std::string nameOfBook);
    void editBookStatus(std::string nameOfBook);

private:
    std::map<std::string, int> books; 
        // first (key) is book name. 
        // second (value) is status: 
            // 1 -> checked out
            // 2 -> on shelf
            // 3 -> missing
    
};

#endif