//
// Created by 123 on 5/1/2025.
//

#ifndef BOOK_H
#define BOOK_H
#include "Librarymember.h"
#include <string>
class Librarymember;
using namespace std;
class Book {
private:
    string Book_id;
    string title;
    string author;
    Librarymember *borrower;
    int borrowerCount;
    static int total_book;
    string searchword;
    bool isavailable;
    string seachwordtitle;
public:
    Book();
    Book(string Book_id,string title,string author);


    void setBook_id(string Book_id);
    void setTitle(string title);
    void setAuthor(string author);


    string getBook_id();

    string getTitle();
    string getAuthor();
    void addborrowers(Librarymember *borrower);
    static  int getTotalBooks();
    void searchByTitle( string searchword);
    void availablebooks();
    static void searchByauthor( string searchword,Book *book);

};



#endif //BOOK_H
