#ifndef ADMIN_H
#define ADMIN_H

#include "library.h"
#include "marco.h"
#include "librarian.h"
#include "account.h"
#include "book.h"

using namespace std;

class admin : public librarian
{
public:
    admin() {role = ADMIN;}
    admin(const account &o) {
        name = o.name; password = o.password; email = o.email; id = o.id; tel = o.tel;
        username = o.username; day = o.day; month = o.month; year = o.year; role = ADMIN;
    }

    // MOT SO HAM KHAC
};

#endif // ADMIN_H
