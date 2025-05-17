//
// Created by 123 on 5/1/2025.
//

class BOOK;
#include "Book.h"
#include "Librarymember.h"
#include <iostream>
class Librarymember;
int Book::total_book = 0;
Book::Book() {
    Book_id="";
    title="";
    author="";
total_book=0;
}
Book::Book(string Book_id, string title, string author) {
total_book=0;
    this->Book_id=Book_id;
    this->title=title;
    this->author=author;
    total_book++;
    isavailable=true;
}



// Setters
void Book::setBook_id(string Book_id) {
  this->  Book_id = Book_id;
}

void Book::setTitle(string title) {
 this->   title = title;
}

void Book::setAuthor(string author) {
    this->author = author;
}

// Getters
string Book::getBook_id() {
    return Book_id;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

void Book::addborrowers(Librarymember *borrower) {
 Librarymember *temp = new Librarymember [borrowerCount + 1];
    for (int i = 0; i < borrowerCount; i++) {
        temp[i] = borrower[i];
    }

    delete[] borrower;
    borrower = temp;
    borrowerCount++;
    isavailable=false;
}

int Book::getTotalBooks() {
    return total_book;
}
void Book::searchByTitle( string searchword) {

    bool found = false;
    for (int i = 0; i < total_book; i++) {
        if (searchword==title){
      cout<<"book id:"<<Book_id<<endl;
            cout<<"Title:"<<title<<endl;
            cout<<"authr"<<author<<endl;
        }
    }
    if (!found) {
        cout << "No matching books found.\n";
    }
}

void Book::availablebooks() {
    bool isAvailable = false;
    for (int i = 0; i < total_book; i++) {
        if (isAvailable==true) {
            cout << "Book ID:"<<Book_id<<endl;
                cout << "Title:"<<title<<endl;
                cout << "Author"<<author<<endl;
        }
    }
    if (!isAvailable) {
        cout << "No books are currently available";
    }
}

void Book::searchByauthor( string seachwordtitle,Book *books) {

    bool found = false;
    for (int i = 0; i < total_book; ++i) {
        if (seachwordtitle==books[i].getAuthor()){
            cout<<"book id:"<<endl;
             books[i].getBook_id();
           cout<<"Title:"<<endl;
            books[i].getTitle();
            cout<<"author"<<endl;
            books[i].getAuthor();
        }
    }
    if (!found) {
        cout << "No matching books found";
    }
}
