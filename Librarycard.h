//
// Created by 123 on 5/1/2025.
//

#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H
#include <string>
using namespace std;

class Librarycard
{
private:
    string cardNumber;
    string issuedate;
    string expirydate;
public:
    Librarycard();
    Librarycard( string cardNumber,string issuedate,string expirydate);
    void setcardnumber(string cardNumber);
    void setissuedate(string issuedate);
    void setexpirydate(string expirydate);




    string getcardnumber();
    string getissuedate();
    string getexpirydate();




};
#endif //LIBRARYCARD_H
