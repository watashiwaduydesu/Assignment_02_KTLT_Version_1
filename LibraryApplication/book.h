#ifndef BOOK_H
#define BOOK_H

#include "marco.h"
#include "library.h"

using namespace std;

class book
{
public:
    book();

    bool operator < (const book &o) const {
        return code < o.getCode();
    }

private:
    string code; // he thong tu dong tao
    string name, author, description;
    int year; // nam xuat ban
    int remain_number; // so luong sach con trong thu vien

public:
    string getCode() const {return code;}
    string getName() {return name;}
    string getAuthor() {return author;}
    string getDescription() {return description;}
    int getYear() {return year;}
    int getRemain() {return remain_number;}
};

#endif // BOOK_H
