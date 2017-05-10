#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "library.h"
#include "marco.h"
#include "account.h"
#include "book.h"

using namespace std;

class librarian : public account
{
public:
    librarian() {role = LIBRARIAN;}
    librarian(const account &o) {
        name = o.name; password = o.password; email = o.email; id = o.id; tel = o.tel;
        username = o.username; day = o.day; month = o.month; year = o.year; role = LIBRARIAN;
    }

    void addBook(book &bk, int number = 1);
    int eraseBook(const book &bk, int number = 1);
    int eraseBookAll(const book &bk);

    // MOT SO HAM KHAC
};

#endif // LIBRARIAN_H
