//
// Created by 123 on 5/1/2025.
//

#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <string>
#include <iostream>
using namespace std;
class Library {

private:
  string  libraryId;
string name;
  int book_count;
  string checkBook_id;
  string code;
  Book *book;

public:
  Library();
  Library(string  libraryId,string name,int book_count);
  void setLibraryId(string libraryId);
  void setName(string name);
void addbook(string Book_id, string title, string author);
  bool isavailable(string checkBook_id,string Book_id);
  // Getters
  string getLibraryId();
  string getName() ;


};



#endif //LIBRARY_H
