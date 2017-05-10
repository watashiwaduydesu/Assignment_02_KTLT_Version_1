#ifndef BOOK_H
#define BOOK_H

#include "library.h"
#include "marco.h"

using namespace std;

class book
{   // lib va admin co quyen chinh sua sach
    friend class librarian;
    friend class admin;
    friend class user_book;
    friend class data;

private:
    string code, name, author, information;
    int remain_number; // so sach con lai

public:
    book() {}
    book(string name_, string author_, string information_, int remain_number_, string code_ = ID_NULL)
        : name(name_), author(author_), information(information_), remain_number(remain_number_), code(code_)
    {
    }

    void showInformation();

    string getCode() {return code;}
    string getName() {return name;}
    string getAuthor() {return author;}
    string getInformation() {return information;}
    int getRemain() {return remain_number;}


};

#endif // BOOK_H
