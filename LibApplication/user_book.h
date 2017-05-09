#ifndef USER_BOOK_H
#define USER_BOOK_H

#include "user.h"
#include "book.h"

class user_book // lop quan li nguoi dung - muon sach
{
private:
    user _user;
    book _book;
    int d1, m1, y1; // ngay muon
    int d2, m2, y2; // ngay tra

public:
    user_book() {}
    user_book(const user &user_, const book &book_) : _user(user_), _book(book_){}

    user getUser() {return _user;}
    book getBook() {return _book;}
    int getD1() {return d1;}
    int getM1() {return m1;}
    int getY1() {return y1;}
    int getD2() {return d2;}
    int getM2() {return m2;}
    int getY2() {return y2;}

    void setDateBegin(int d, int m, int y) {
        d1 = d; m1 = m; y1 = y;
    }

    void setDateEnd(int d, int m, int y) {
        d2 = d, m2 = m; y2 = y;
    }
};

#endif // USER_BOOK_H
