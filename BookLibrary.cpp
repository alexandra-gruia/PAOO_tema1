#include "BookLibrary.h"
using namespace std;

BookLibrary::BookLibrary(size_t capacitate) : capacitate(capacitate), numarCarti(0), books(new Book[capacitate]) {
    cout << "Biblioteca creata cu capacitatea de: " << capacitate << endl;
}

// Copy Constructor
BookLibrary::BookLibrary(const BookLibrary& other) : capacitate(other.capacitate), numarCarti(other.numarCarti), books(new Book[other.capacitate]) {
    cout << "Copy constructorul a fost chemat" << endl;
    for (size_t i = 0; i < numarCarti; i++) {
        books[i] = other.books[i];
    }
}

// Move Constructor
BookLibrary::BookLibrary(BookLibrary&& other) noexcept : capacitate(other.capacitate), numarCarti(other.numarCarti), books(other.books) {
    cout << "Move constructorul a fost chemat" << endl;
    other.books = nullptr;
    other.capacitate = 0;
    other.numarCarti = 0;
}

// Destructor
BookLibrary::~BookLibrary() {
    delete[] books;
    cout << "Biblioteca a fost distrusa" << endl;
}

bool BookLibrary::addBook(const string& titlu, const string& autor, int id) {
    if (numarCarti < capacitate) {
        books[numarCarti++] = {titlu, autor, id};
        return true;
    }
    return false; 
}

void BookLibrary::printBooks() const {
    for (size_t i = 0; i < numarCarti; i++) {
        cout << "ID: " << books[i].id << ", Titlu: " << books[i].titlu << ", Autor: " << books[i].autor << endl;
    }
}

// Getter pentru numarul de carti
size_t BookLibrary::getNumarCarti() const {
    return numarCarti;
}
