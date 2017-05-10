#ifndef USER_BOOK_H
#define USER_BOOK_H

#include "library.h"
#include "user.h"
#include "book.h"

class user_book // lop quan li nguoi dung - muon sach
{
private:
    user _user;
    book _book;
    QDate begin, end;

public:
    user_book() {}
    user_book(const user &user_, const book &book_) : _user(user_), _book(book_){}
    user_book(const user &user_, const book &book_, QDate begin_, QDate end_) : user_book(user_, book_) {
        begin = begin_; end = end_;
    }

    user getUser() {return _user;}
    book getBook() {return _book;}
    QDate getDateBegin() {return begin;}
    QDate getDateEnd() {return end;}

    void setDateBegin(QDate o) {begin = o;}
    void setDateBegin(int d, int m, int y) {
        begin.setDate(y, m, d);
    }

    void setDateEnd(QDate o) {end = o;}
    void setDateEnd(int d, int m, int y) {
        end.setDate(y, m, d);
    }
};

#endif // USER_BOOK_H
