#include<iostream>
#include <string>

#include "Librarycard.h"
#include "Librarymember.h"
#include "Library.h"



using namespace std;

int main()
{
    Librarymember m1 ("1234");
    Librarymember m2 ("2234");

     Librarycard lib("12","66","22");
    m1.assigncard(lib);
    Book* book1 = new Book("001", "khilafat", "madodi");
book1->searchByTitle("khilafat");
    book1->availablebooks();
    m1.display();
m2.display();
}
