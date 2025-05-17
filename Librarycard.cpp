#include "Librarycard.h"

Librarycard::Librarycard()
{
    cardNumber="";
    issuedate="";
    expirydate="";
}

Librarycard::Librarycard( string cardNumber,string issuedate,string expirydate)
{
    this->cardNumber=cardNumber;
    this->expirydate=expirydate;
    this->issuedate=issuedate;
}

void Librarycard::setcardnumber(string setcardnumber)
{
    this->cardNumber=cardNumber;
}
void Librarycard::setissuedate(string issuedate)
{
    this->issuedate=issuedate;
}
void Librarycard::setexpirydate(string expirydate)
{
    this->expirydate=expirydate;
}
string Librarycard::getcardnumber()
{
    return cardNumber;
}

string Librarycard::getissuedate()
{
    return issuedate;
}

string Librarycard::getexpirydate()
{
    return expirydate;
}
