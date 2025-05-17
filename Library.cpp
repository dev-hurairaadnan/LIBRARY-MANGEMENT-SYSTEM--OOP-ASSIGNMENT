#include <iostream>

#include "Library.h"
#include "Book.h"
#include <string>

using namespace std;


Library::Library() {
    libraryId="";
    name="";
    book_count=0;

}
Library::Library(string libraryId, string name, int book_count) {
    this->libraryId=libraryId;
    this->name=name;
    this->book_count=book_count;
}


void Library::setLibraryId(string libraryId) {
   this-> libraryId = libraryId;
}

void Library::setName(string name) {
  this->  name = name;
}

// Getters
string Library::getLibraryId() {
    return libraryId;
}
void Library::addbook(string Book_id, string title, string author) {
  Book *temp=new Book[book_count + 1];
for (int i=0;i<book_count;i++) {
    temp[i]=book[i];
}
    temp[book_count]=Book( Book_id,  title,  author);
    delete[] book;
    book = temp;
    book_count++;
}


string Library::getName() {
    return name;
}


bool Library::isavailable(string checkBook_id,string Book_id ) {
    bool found = false;
    for (int i = 0; i < book_count; i++)
        if (checkBook_id == book[i].getBook_id()) {
            cout << "Book is Available" << endl;
            return true;
        } else {
            cout << "Not Available" << endl;
        }
    return 0;
}
void assiglibrarycode(string libraryId, string  code) {
code=libraryId;


}