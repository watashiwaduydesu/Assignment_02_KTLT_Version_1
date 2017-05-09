#ifndef USER_H
#define USER_H

#include "library.h"
#include "marco.h"
#include "account.h"

using namespace std;

class user : public account
{
public:
    user() {role = USER;}
    user(const account &o) {
        name = o.name; password = o.password; email = o.email; id = o.id; tel = o.tel;
        username = o.username; day = o.day; month = o.month; year = o.year; role = USER;
    }

    int requireBook(string code_book);
};

#endif // USER_H
