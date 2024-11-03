#ifndef BOOK_LIBRARY_H
#define BOOK_LIBRARY_H

#include <string>
#include <iostream>

using namespace std;

struct Book {
    string titlu;
    string autor;
    int id;
};

class BookLibrary {
private:
    Book* books;      
    size_t capacitate;  
    size_t numarCarti;     
    
public:
    // Constructor
    BookLibrary(size_t capacitate);

    // Copy Constructor
    BookLibrary(const BookLibrary& other);

    // Move Constructor
    BookLibrary(BookLibrary&& other) noexcept;

    // Destructor
    ~BookLibrary();

    // Gestionarea cartilor
    bool addBook(const string& titlu, const string& autor, int id);
    void printBooks() const;

    // Getter pentru numar de carti
    size_t getNumarCarti() const;
};


#endif
