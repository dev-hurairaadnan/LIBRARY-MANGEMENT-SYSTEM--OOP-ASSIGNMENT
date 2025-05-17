//
// Created by 123 on 5/1/2025.
//

#include "Librarymember.h"
#include"Book.h"
#include "Librarycard.h"
#include <iostream>
int Librarymember::total_borrower_members = 0;
int Librarymember::total_members = 0;


Librarymember::Librarymember() {
    memberid = "";
}
Librarymember::Librarymember(string memberid) {
    this->memberid = memberid;
    total_members++;
}
void Librarymember::setmemberid(string memberid) {
    this->memberid = memberid;
}

string Librarymember::getmemberid() {
    return memberid;
}

void Librarymember::assigncard(Librarycard card) {

this->card=card;
}
void Librarymember::display() {
    cout<<"Member id:"<<memberid<<endl;
    cout<<"Card number:"<<card.getcardnumber()<<endl;
}

void Librarymember::borrowbook(Book *book) {
    Book *temp=new Book[book_count+1];

    for(int i=0;i<book_count;i++){
        temp[i]=book[i];
    }
    delete[] book;
    temp[book_count]=Book();

    book=temp;
    book_count++;
total_borrower_members++;

}

int Librarymember::gettotalmembers() {
    return total_members;
}

int Librarymember::total_borrowermembers()
{
    return total_borrower_members;
}
void Librarymember::searchByid( string seachwordid,Librarymember *member) {

    bool found = false;
    for (int i = 0; i < total_members; ++i) {
        if (seachwordid==member->getmemberid()) {

            cout<<"Member id:"<<endl;
    member->getmemberid();
            cout<<"Member fouand"<<endl;

        }
    }
    if (!found) {
        cout << "No matching books found";
    }
}









