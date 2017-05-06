#ifndef BOOK_H
#define BOOK_H

#include "marco.h"
#include "library.h"

using namespace std;

class book
{
public:
    book();

private:
    string code; // he thong tu dong tao
    string name, author, description;
    int year; // nam xuat ban
    int remain_number; // so luong sach con trong thu vien
};

#endif // BOOK_H
