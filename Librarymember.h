//
// Created by 123 on 5/1/2025.
//

#ifndef LIBRARYMEMBER_H
#define LIBRARYMEMBER_H
#include <string>
#include "Book.h"
class Book;

#include "Librarycard.h"
using namespace std;


class Librarymember {
private:
string memberid;
    Librarycard card;
    int book_count;
    static int total_members;
    static int total_borrower_members;
    int librarycode;

    Book *book;

public:
    Librarymember();
    Librarymember(string memberid);


    void setmemberid(string memberid);
    string getmemberid();
    void assigncard( Librarycard card);
void display();
    void borrowbook(Book *book);

Librarymember (Librarymember * borrower);
    static int gettotalmembers();
    static int total_borrowermembers();
    static void searchByid( string seachwordid,Librarymember *member);
};



#endif //LIBRARYMEMBER_H
